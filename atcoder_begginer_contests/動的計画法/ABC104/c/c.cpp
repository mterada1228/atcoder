#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

const long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

long long D, G;

vector<long long> P, C;

int main() {
  cin >> D >> G;

  P.resize(D);
  C.resize(D);

  // 点数は 100 点刻みなので、全てにおいて 1 / 100 して問題ない
  G /= 100;
  for (long long i = 0; i < D; ++i) cin >> P[i] >> C[i];
  for (long long i = 0; i < D; ++i) C[i] /= 100;

  // DP
  vector<vector<long long>> dp(D + 1, vector<long long>(105501, INF));
  dp[0][0] = 0;

  for (long long i = 0; i < D; ++i) {
    for (long long point = 0; point <= 105500; ++point) {
      // i 番目の問題(配点 i) を 0~Pi-1 問まで解いて得点を得る
      for (long long j = 0; j < P[i]; ++j) {
        chmin(dp[i + 1][point + j * (i + 1)], dp[i][point] + j);
      }
      // i 番目の問題(配点 i) を Pi 問といて、基本点 + ボーナスを得る
      chmin(dp[i + 1][point + P[i] * (i + 1) + C[i]], dp[i][point] + P[i]);
    }
  } 

  long long ans = INF;
  // G 点以上獲得できる場合に、最小の回答回数が存在する可能性もあるので、
  // G 点以上 105500 点(論理上の最高得点）以内で、最小の回答回数を出力する
  for (long long point = G; point < 105500; ++point) chmin(ans, dp[D][point]);

  cout << ans << endl;

  return 0;
}