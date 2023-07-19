#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<string> S;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.insert(s);
  }

  set<string> ans;

  for (auto e: S) {
    reverse(e.begin(), e.end());

    auto it = ans.find(e);

    if (it == ans.end()) {
      reverse(e.begin(), e.end());
      ans.insert(e);
    }
  }

  cout << ans.size() << endl;

  return 0;
}