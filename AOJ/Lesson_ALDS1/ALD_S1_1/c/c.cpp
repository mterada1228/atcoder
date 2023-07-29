#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 0;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    bool flg = true;

    if (a < 2) {
      flg = false;
    } else {
      for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0) {
          flg = false;
          break;
        }
      }
    }

    if (flg) ++ans;
  }

  cout << ans << endl;

  return 0;
}