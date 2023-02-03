#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, a, b;
  string s;

  cin >> n >> a >> b >> s;

  // 文字列を2つ結合することで、左端から右端に文字列を移動させた時の全パターンを網羅できる。
  // s = rrefa の時
  // 0 times: rrefarrefa
  //          ^   ^
  // 1 times: rrefarrefa     
  //           ^   ^
  // 2 times: rrefarrefa     
  //            ^   ^
  // 3 times: rrefarrefa     
  //             ^   ^
  // 4 times: rrefarrefa     
  //              ^   ^
  // 5 times: rrefarrefa     
  //               ^   ^
  // そして文字数を N とすると N 回の移動で元の文字列に戻る
  s += s;

  long long ans = 1ll << 60;

  for (int i = 0; i < n; ++i) {
    long long tmp = a * i;

    for (int j = 0; j < n / 2; ++j) {
      int l = i + j;
      int r = i + n - 1 - j;
      if (s[l] != s[r]) tmp += b;
    }

    ans = min(ans, tmp);
  }

  cout << ans << endl;

  return 0;
}