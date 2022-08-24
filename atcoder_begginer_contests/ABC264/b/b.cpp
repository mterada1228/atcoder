#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;

  // 中心の座標は (8, 8)
  // 中心から (c, r) までのチェビシェフ距離が奇数の場合は黒マス
  int cl = max(abs(8 - c), abs(8 - r));
  if (cl % 2 == 1) {
    cout << "black" << endl;
  } else {
    cout << "white" << endl;
  }

  return 0;
}