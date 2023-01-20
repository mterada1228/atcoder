#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  s = '0' + s;

  for (int i = 1; i <= n - 1; ++i) {
    for (int l = 1; l <= n - i; ++l) {
      if (s[l] == s[l + i]) {
        cout << l - 1 << endl;
        break;
      }

      if (l == n - i) {
        cout << l << endl;
      }
    }
  }

  return 0;
}