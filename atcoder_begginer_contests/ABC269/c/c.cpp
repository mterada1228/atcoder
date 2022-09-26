#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;

  cin >> n;

  vector<long long> S = { 0 };

  for (int i = 0; i < 60; ++i) {
    // (1ll<<i) は 2^i を返す => 1ll = 1。<< i は i 桁だけ左にシフト演算する。
    // n & (1ll<<i) は n と 2^i の AND 演算。
    // n の i 桁目が 0 の場合は、0 (false), 1 の場合は非0（true）となる。
    // => n の i 桁目が 1 かどうか、という判定に使用できる！
    if (n & (1ll<<i)) {
      int init_size = S.size();
      for (int j = 0; j < init_size; ++j) {
        // 現在の配列に含まれるすべての数に対して、i 桁目を 1 に変更したものを追加する
        S.push_back(S[j]|(1ll<<i));
      }
    }
  }

  for (auto e: S) {
    cout << e << endl;
  }

  return 0;
}