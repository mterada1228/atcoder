#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  long long ans = 0; 

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      for (int k = 0; k < 10; ++k) {
        for (int l = 0; l < 10; ++l) {
          bool flg = true;

          for (int m = 0; m < 10; ++m) {
            if (s[m] == 'o') {
              if (m != i && m != j && m != k && m != l) flg = false;
            }

            if (s[m] == 'x') {
              if (m == i || m == j || m == k || m == l) flg = false;
            }
          }

          if (flg) {
            ++ans;
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}