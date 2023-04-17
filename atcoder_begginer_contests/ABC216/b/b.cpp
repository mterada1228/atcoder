#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> st(n);

  for (int i = 0; i < n; ++i) {
    string s, t;
    cin >> s >> t;

    st[i] = s + ' ' + t;
  }

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (st[i] == st[j]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}