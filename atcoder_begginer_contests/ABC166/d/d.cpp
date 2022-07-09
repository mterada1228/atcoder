#include <bits/stdc++.h>
using namespace std;

int main() {
  // A - B = 1 の場合を仮定する。(A と B が一個違いしかない。)
  // n**5 - (n-1)**5 の数列は、...781, 211, 31, 1, 1, 31, 211, ...
  // プラス方向で初めて 10**9 を超えるのは n = 120 の時。
  // マイナス方向で初めて 10**9 を超えるのは n = -119 の時。
  // よって、 -118 <= A <= 119 かつ -119 <= B <= 118 の範囲のみ検証すれば良い。

  // そして A - B > 1 の場合を考える。
  // A が同じだとすると、 A - B = 1 の時と比べて、より B が小さいということを意味する。
  // 従って、B**5 も A - B = 1 の時と比べて小さいということを意味する。
  // ということは、 A**5 - B**5 の結果は同じ A に対して、 A - B = 1 の時より必ず大きい。

  // (検証)
  // A - B = 1 の時: n**5 - (n-1)** 5 の数列 => 1,  1, 31, 211, ... 
  // A - B = 2 の時: n**5 - (n-2)** 5 の数列 => 32, 2, 32, 242, ... 

  // ゆえに、 10**9 を超えるのは A - B = 1 の時の n = -119, 120 の場合より確実に小さい n になる。
  // なので、全ての場合において、 -118 <= A <= 119 かつ -119 <= B <= 118 の範囲のみ検証すれば良い。

  int X;
  cin >> X;

  for (int i = -118; i <= 119; ++i) {
    for (int j = -119; j <= 118; ++j) {
      if (pow(i, 5) - pow(j, 5) == X) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }

  return 0;
}
