#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> dp(N + 1, vector<int>(10, 0));

  for (int i = 1; i <= 9; ++i) dp[1][i] = 1;

  for (int i = 2; i <= N; ++i) {
    for (int j = 1; j <= 9; ++j) {
      for (int k = max(1, j - 1); k <= min(9, j + 1); ++k) {
        dp[i][j] += dp[i - 1][k];
        dp[i][j] %= 998244353;
      }
    }
  }

  int res = 0;
  for (int i = 1; i <= 9; ++i) {
    res += dp[N][i];
    res %= 998244353;
  }

  cout << res << endl;

  return 0;
}