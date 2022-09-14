#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> X(100001, 0);
  vector<long long> A(100001, 0);

  for (int i = 0; i < n; ++i) {
    long long t, x, a;

    cin >> t >> x >> a;

    X[t] = x;
    A[t] = a;
  }

  vector<vector<long long>> dp(5, vector<long long>(100001, -1000000000000000));

  dp[0][0] = 0;

  for (int t = 1; t <= 100000; ++t) {
    for (int x = 0; x <= 4; ++x) {
      // 移動しない
      dp[x][t] = dp[x][t - 1];
      // 右に移動 (右に移動して 0 に来ることはない)
      if (x != 0) dp[x][t] = max(dp[x][t], dp[x-1][t-1]);
      // 左に移動 (左に移動して 4 に来ることはない)
      if (x != 4) dp[x][t] = max(dp[x][t], dp[x+1][t-1]);
    }
    dp[X[t]][t] += A[t];
  }

  long long ans = 0;

  for (int x = 0; x <= 4; ++x) {
    ans = max(ans, dp[x][100000]); 
  }

  cout << ans << endl;

  return 0;
}