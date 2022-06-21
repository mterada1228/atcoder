#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

int main() {
  int N, K;
  cin >> N >> K;

  vector<long long> H(N + 1);
  H[0] = 0;
  for (int i = 1; i <= N; ++i) cin >> H[i];

  vector<long long> dp(N + 1, INF);

  dp[0] = 0;
  dp[1] = 0;
  dp[2] = abs(H[2] - H[1]);

  for (int i = 3; i <= N; ++i) {
    for (int j = max(1, i - K); j < i; ++j) {
      chmin(dp[i], abs(H[i] - H[j]) + dp[j]);
    }
  }

  cout << dp[N] << endl;

  return 0;
}
