#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<long long>> xy;

  for (int i = 0; i < n; ++i) {
    long long x, y;
    cin >> x >> y;
    xy.push_back({ x, y });
  }

  vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));

  for (int i = 1; i <= n; ++i) {
    long long x = xy[i - 1][0];
    long long y = xy[i - 1][1];

    if (x == 0) {
      dp[i][0] = max({ dp[i - 1][0] + y, dp[i - 1][1] + y, dp[i - 1][0] });
      dp[i][1] = dp[i - 1][1];
    } else {
      dp[i][0] = dp[i - 1][0];
      dp[i][1] = max({ dp[i - 1][0] + y, dp[i - 1][1] });
    }
  }

  cout << max(dp[n][0], dp[n][1]) << endl;

  return 0;
}