#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  vector<int> P(n + 1, 0);

  for (int i = 2; i <= n; ++i) {
    cin >> P[i];
  }

  vector<int> dp(n + 1, 0);
  dp[1] = 0;

  for (int i = 2; i <= n; ++i) {
    dp[i] = dp[P[i]] + 1;
  }

  cout << dp[n] << endl;

  return 0;
}