#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string s, t;
  cin >> s >> t;

  vector<vector<int>> dp(n, vector<int>(m));

  if (s[0] == t[0]) dp[0][0] = 1;

  for (int i = 1; i < n; ++i) {
    dp[i][0] = 1;

    for (int k = 1; k < m; ++k) {
      if (i - k < 0) break;

      for (int j = 0; j < m; ++j) {
        if (dp[i - k][j] == 1) {
          if (j + k < m) {
            dp[i][j + k] = 1;
          }
        }
      }
    }
  }

  for (auto e: dp) {
    bool flg = false;

    for(auto f: e) {
      if (f == 1) flg = true; 
    }

    if (flg) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}