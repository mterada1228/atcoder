#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<bool> have(n+2, false);

  int sold = 0;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    // n を超える巻は売っていい
    if (a > n) {
      ++sold;
    // 2冊以上ある本は売っていい
    } else if (have[a]) {
      ++sold;
    } else {
      have[a] = true;
    }
  }

  int L = 1;
  int R = n + 1;
  while (true) {
    while (have[L]) {
      // 持っていない本で最小の巻数を求める
      ++L;
    }

    while (R != 0 && !have[R]) {
      // 持っている本で最大の巻数を求める
      --R;
    }

    if (sold >= 2) {
      have[L] = true;
      sold = sold - 2;
    } else {
      if (L >= R) break;
      // 確実に売れる本がない場合は、最大の巻数を売る事にする
      have[R] = false;
      ++sold;
    }
  }

  cout << L-1 << endl;
}