#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

// 緩和を行う関数
template<class T> void chmin(T &a, T b) {
  if (a > b) {
    a = b;
  }
}

int main() {
  long long h, n;
  cin >> h >> n;

  vector<long long> a(n), b(n);

  for (int i = 0; i < n; ++i) {
    cin >> a[i] >> b[i];
  }

  vector<long long> dp(h + 1, INF);

  dp[0] = 0;

  for (int i = 0; i < n; ++i) {
    long long j = 0;
    for (int j = 0; j <= h; ++j) {
      if (j + a[i] <= h) {
        chmin(dp[j + a[i]], dp[j] + b[i]);
      } else {
        chmin(dp[h], dp[j] + b[i]);
      }
    }
  }

  cout << dp[h] << endl;

  return 0;
}