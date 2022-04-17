#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, k;
  cin >> n >> m >> k;

  vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));

  dp[0][0] = 1;
  for (int i = 0; i < n; ++i) {
    for (long long j = 0; j < k; ++j) {
      for (long long l = 1; l <= m; ++l) {
        if (j + l <= k) dp[i + 1][j + l] += dp[i][j] % 998244353;
      }
    }
  }

  long long sum = 0;
  for (int i = 1; i <= k; ++i) {
    sum += dp[n][i] % 998244353;
  }

  cout << sum % 998244353 << endl;

  return 0;
}
