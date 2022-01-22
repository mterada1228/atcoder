#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 緩和を行う関数
template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

const long long INF = 1LL << 60;

int N, M, R;

int main() {
  cin >> N >> M >> R;
  vector<int> r(R);

  // 訪れる必要のある町
  for (int i = 0; i < R; ++i) cin >> r[i];

  // dp 配列
  vector<vector<long long>> dp(N + 1, vector<long long>(N + 1, INF));

  // dp 初期条件
  // 1) a -> b に道が存在するのであれば、dp[a][b] に 距離 c を設定
  // 2) a = b の場合は、距離 0 を設定
  // 2) a != b で a -> b に道が存在しないのであれば、dp[a][b] は INF が設定されている
  for (int i = 0; i < M; ++i) {
    int a, b;
    long long c;
    cin >> a >> b >> c;
    dp[a][b] = c;
    dp[b][a] = c;
  }
  for (int i = 0; i <= N; ++i) dp[i][i] = 0;

  // dp 遷移
  // k を経由すると仮定して、i -> j と、i -> k -> j と移動したときより短い距離が、i -> j の最短距離となる
  for (int k = 1; k <= N; ++k) {
    for (int i = 1; i <= N; ++i) {
      for (int j = 1; j <= N; ++j) {
        chmin(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }

  // 訪れるべき街の順列を全探索して、最短となる移動方法を見つける
  vector<long long> candidates;

  sort(r.begin(), r.end()); // next_permutation は昇順にソート済みの配列でなければ全ての組み合わせを返せない
  do {
    long long sum = 0;
    for (int i = 0; i < R - 1; ++i) {
      sum += dp[r[i]][r[i + 1]];
    }
    candidates.push_back(sum);
  } while (next_permutation(r.begin(), r.end()));

  sort(candidates.begin(), candidates.end());

  cout << candidates[0] << endl;
}