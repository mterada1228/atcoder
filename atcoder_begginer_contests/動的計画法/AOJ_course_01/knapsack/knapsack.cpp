#include <iostream>
#include <vector>
using namespace std;

int N, W;
vector<int> v, w;

// 緩和処理(最大値で置き換える)
template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  cin >> N >> W;

  v.resize(N);
  w.resize(N);

  for (int i = 0; i < N; ++i) cin >> v[i] >> w[i];

  vector<vector<int>> dp(N+1, vector<int>(W+1, 0));

  // DP
  for (int i = 0; i < N; ++i) {
    for (int k = 0; k <= W; ++k) {
      // i 番目の品物を選ぶ = i 番目の品物の重さを加えると少なくとも重さが k に達する。と考える。
      if (k - w[i] >= 0) {
        chmax(dp[i + 1][k], dp[i][k - w[i]] + v[i]);
      }
      // i 番目の商品を選ばない場合
      chmax(dp[i + 1][k], dp[i][k]);
    }
  }

  // DP テーブルのデバック用
  for (int i = 0; i <= N; ++i) {
    for (int k = 0; k <= W; ++k) {
      cout << dp[i][k] << " ";
    }
    cout << endl;
  }

  // Answer
  cout << "Answer is " << dp[N][W] << endl;
}