#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int N;

int main() {
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; ++i) cin >> p[i];

  // 得点の最大値を求める
  int sum_p = accumulate(p.begin(), p.end(), 0);

  // DP
  vector<vector<int>> dp(N + 1, vector<int>(sum_p + 1, 0));
  dp[0][0] = 1;

  for (int i = 0; i < N; ++i) {
    for (int k = 0; k <= sum_p; ++k) {
      // i 番目の問題を解かない場合
      dp[i + 1][k] = dp[i][k];
      // i 番目の問題を解く場合
      if (k - p[i] >= 0) dp[i + 1][k] = dp[i][k - p[i]]; 
    }
  }

  // DP テーブルのデバック用
  for (int i = 0; i <= N; ++i) {
    for (int k = 0; k <= sum_p ; ++k) {
      cout << dp[i][k] << " ";
    }
    cout << endl;
  }

  cout << "Answer is " << accumulate(dp[N].begin(), dp[N].end(), 0) << endl;
}