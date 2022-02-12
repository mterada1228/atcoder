#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 5;

  // bit が 0b011111 = 31 になるまでループする
  // そうすることで、{0, 1, 2, 3, 4} という 5つの数字からなる、
  // 全ての組み合わせを網羅することができる
  for (int bit = 0; bit < (1<<n); ++bit) {
    vector<int> S;

    // bit の各桁を見ていく
    // i 番目の桁が 1 の場合は、配列に加える
    // bit = 0b010101 の場合、 {0, 2, 4} が配列に含まれることになる
    for (int i = 0; i < n; ++i) {
        if (bit & (1<<i)) {
          S.push_back(i);
        }
    }

    // bit の表す集合の出力
    cout << bit << ": {";
    for (int i = 0; i < (int)S.size(); ++i) {
        cout << S[i] << " ";
    }
    cout << "}" << endl;
  }
}