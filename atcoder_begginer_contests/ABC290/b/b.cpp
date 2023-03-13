#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int cnt = 0;
  bool flg = true;

  for (auto e: s) {
    if (flg) {
      cout << e;
    } else {
      cout << 'x';
    }

    if (e == 'o') {
      cnt += 1;
    }

    if (cnt >= k) {
      flg = false;
    }
  }

  cout << endl;

  return 0;
}