#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<long long> A(n + 1);

  A[0] = 0;

  for (int i = 1; i < n + 1; ++i) cin >> A[i];

  vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, -1000000000000000000ll));

  dp[0][0] = 0;

  for (int i = 1; i < n + 1; ++i) {
    for (int j = 0; j < m + 1; ++j) {
      if (j == 0) {
        dp[i][0] = 0;
      } else {
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-1] + A[i] * j);
      }
    }
  }

  cout << dp[n][m] << endl;

  return 0;
}