#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string t;
  cin >> t;

  vector<int> ans;

  for (int i = 1; i <= n; ++i) {
    string s;
    cin >> s;

    int cnt = 0;

    if (t.size() == s.size()) {
      for (int j = 0; j < s.size(); ++j) {
        if (t[j] != s[j]) ++cnt;
      }

      if (cnt <= 1) ans.push_back(i); 
    }

    if (t.size() == s.size() - 1) {
      int k = 0;

      for (int j = 0; j < s.size(); ++j) {
        if (k >= t.size()) break;

        if (t[k] != s[j]) {
          ++cnt;
        } else {
          ++k;
        }
      }

      if (cnt <= 1) ans.push_back(i);
    }

    if (t.size() == s.size() + 1) {
      int k = 0;

      for (int j = 0; j < t.size(); ++j) {
        if (k >= s.size()) break;

        if (t[j] != s[k]) {
          ++cnt;
        } else {
          ++k;
        }
      }

      if (cnt <= 1) ans.push_back(i);
    }
  }

  sort(ans.begin(), ans.end());

  cout << ans.size() << endl;

  for (auto e: ans) {
    cout << e << " ";
  }

  cout << endl;

  return 0;
}