#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> h(N + 1, vector<int>(3));
  h[0][0], h[0][1], h[0][2] = 0;

  for (int i = 1; i <= N; ++i) {
    for (int j = 0; j < 3; ++j) {
      cin >> h[i][j];
    }
  }

  vector<vector<int>> dp(N + 1, vector<int>(3, 0)); 

  for (int i = 1; i <= N; ++i) {
    for (int j = 0; j < 3; ++j) {
      for (int k = 0; k < 3; ++k) {
        if (j == k) continue;
        dp[i][j] = max(dp[i][j], dp[i - 1][k] + h[i][j]);
      }
    }
  }

  int max_h = 0;
  for (int i = 0; i < 3; ++i) {
    max_h = max(max_h, dp[N][i]);
  }

  cout << max_h << endl;

  return 0;
}