#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

int main() {
  int N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; ++i) cin >> A[i];

  vector<long long> dp(N, INF);

  dp[0] = 0;
  dp[1] = abs(A[1] - A[0]);

  for (int i = 2; i < N; ++i) {
    chmin(dp[i], abs(A[i] - A[i - 1]) + dp[i - 1]);
    chmin(dp[i], abs(A[i] - A[i - 2]) + dp[i - 2]);
  }

  cout << dp[N - 1] << endl;

  return 0;
}