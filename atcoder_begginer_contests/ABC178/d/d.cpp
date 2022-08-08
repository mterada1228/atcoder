#include <bits/stdc++.h>
using namespace std;

int mod_n = 1000000007;

int main() {
  int s;

  cin >> s;

  vector<int> dp(s + 1, 0);

  dp[0] = 0;
  dp[1] = 0;
  dp[2] = 0;

  dp[3] = 1;
  dp[4] = 1;
  dp[5] = 1;

  for (int i = 6; i <= s; ++i) {
    for (int k = 3; k <= i - 3; ++k) {
      dp[i] += dp[k];
      dp[i] %= mod_n;
    }
    dp[i] += 1;
    dp[i] %= mod_n;
  }

  cout << (dp[s] + mod_n) % mod_n << endl;

  return 0;
}