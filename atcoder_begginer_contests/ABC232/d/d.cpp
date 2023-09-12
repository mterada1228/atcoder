#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> C(h + 1, vector<char>(w + 1, '#'));

  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      cin >> C[i][j];
    }
  }

  vector<vector<int>> dp(h + 1, vector<int>(w + 1, 0));

  dp[1][1] = 1;

  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      if (C[i][j] == '#') {
        dp[i][j] = 0;
        continue;
      }

      if (dp[i - 1][j] == 0 && dp[i][j - 1] != 0) {
        dp[i][j] = dp[i][j - 1] + 1;
        continue;
      }

      if (dp[i - 1][j] != 0 && dp[i][j - 1] == 0) {
        dp[i][j] = dp[i - 1][j] + 1;
        continue;
      }

      if (dp[i - 1][j] != 0 && dp[i][j - 1] != 0) {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + 1;
        continue;
      }
    }
  }

  int ans = 0;

  for (int i = 0; i <= h; ++i) {
    for (int j = 0; j <= w; ++j) {
      ans = max(ans, dp[i][j]);
    }
  }

  cout << ans << endl;

  return 0;
}