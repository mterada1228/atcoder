#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  int n, k;
  long long d;
  cin >> n >> k >> d;

  vector<pair<long long, long long>> A(n);

  for (int i = 0; i < n; ++i) {
    long long a;
    cin >> a;

    A[i] = { a, a % d };
  }

  vector<vector<vector<long long>>> dp(n + 1, vector<vector<long long>>(k + 1, vector<long long>(d, -1)));
  dp[0][0][0] = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= k; ++j) {
      for (int l = 0; l < d; ++l) {
        // 存在しない遷移元は選べない
        if(dp[i][j][l] == -1) continue;

        // i 番目の要素を選ばない場合
        chmax(dp[i + 1][j][l], dp[i][j][l]);

        // i 番目の要素を選ぶ場合
        if (j + 1 <= k) {
          long long tmp_d = (l + A[i].second) % d;
          chmax(dp[i + 1][j + 1][tmp_d], dp[i][j][l] + A[i].first);
        }
      }
    }
  }

  cout << dp[n][k][0] << endl;

  return 0;
}