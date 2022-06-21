#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  int N, W;
  cin >> N >> W;

  vector<int> w(N + 1);
  vector<long long> v(N + 1);
  v[0], w[0] = 0;
  for (int i = 1; i <= N; ++i) {
    cin >> w[i];
    cin >> v[i];
  }

  vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));
  for (int i = 1; i <= N; ++i) {
    for (int j = 0; j <= W; ++j) {
      if ( (dp[i - 1][j] + w[i]) <= W ) {
        chmax(dp[i][j + w[i]], dp[i - 1][j] + v[i]);
      }
    }
  }

  cout << "debug +++++++++++++" << endl;
  for (auto e: dp) {
    for (auto f: e) {
      cout << f << ", ";
    }
    cout << endl;
  }

  return 0;
}