#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> A;
  vector<int> B;

  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    A.push_back(a);
    B.push_back(b);
  }

  vector<vector<bool>> dp(n, vector<bool>(x + 1, false));

  // 1 番目の硬貨について dp 配列を埋める
  for (int i = 0; i <= B[0]; ++i) {
    dp[0][i * A[0]] = true;
  }

  // 2 番目以降の硬貨について dp 配列を埋めていく
  for (int i = 1; i < n; ++i) {
    for (int k = 0; k <= B[i]; ++k) {
      for (int j = 0; j <= x; ++j) {
        if (j - k * A[i] >= 0) {
          if (dp[i - 1][j - k * A[i]]) {
            dp[i][j] = true;
          }
        } 
      }
    }
  }

  if (dp[n - 1][x]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}