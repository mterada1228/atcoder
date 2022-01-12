#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

const long long INF = 1LL << 60; // 2^60 を表す。十分大きい値のこと

int main() {
  int N;
  int K;
  cin >> N >> K;

  // 各段のコスト
  vector<long long> h(N);
  for (int i = 0; i < N; ++i) cin >> h[i];
  
  // dp
  vector<long long> dp(N, INF);

  // 初期条件
  dp[0] = 0;

  // ループ
  for (int i = 0; i < N; ++i) {
    for (int j = 1; j < K + 1; ++j) {
      chmin(dp[i + j], dp[i] + abs(h[i + j] - h[i]));
    }
  }

  // Ans
  cout << dp[N - 1] << endl;
}