#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m;
  
  cin >> n >> m;

  vector<long long> X(n + 1, 0);

  for (int i = 1; i <= n; ++i) {
    cin >> X[i];
  }

  vector<long long> Y(n + 1, 0);

  for (int i = 1; i <= m; ++i) {
    int c;
    long long y;
    
    cin >> c >> y;

    Y[c] = y; 
  }

  vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= i; ++j) {
      // 表となる場合
      dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + X[i + 1] + Y[j + 1]);
      // 裏となる場合
      dp[i + 1][0] = max(dp[i + 1][0], dp[i][j] + Y[0]);
    }
  }

  long long ans = 0;

  for (auto e: dp[n]) {
    ans = max(ans, e);
  }

  cout << ans << endl;

  return 0;
}