#include <iostream>
#include <vector>
using namespace std;

vector<long long> IJK(3, 0);

int main() {
  int N, D;
  cin >> N >> D;

  // サイコロの目の積は、2, 3, 5 の素因数で分解できる。
  // すなわち、サイコロの目の積で作成される D は、 D = 2^I * 3^J * 5^K で表すことができる。

  // 素因数分解を行なって I, J, K を求める。
  int cnt = 0;
  int A[3] = {2, 3, 5};
  for (int i = 0; i < 3; ++i) {
    cnt = 0;
    while (D % A[i] == 0) {
      D /= A[i];
      ++cnt;
    }
    IJK[i] = cnt;
  }

  // dp テーブル
  vector<vector<vector<double>>> dp(IJK[0] + 1, vector<vector<double>>(IJK[1] + 1, vector<double>(IJK[2] + 1, 0)));
  dp[0][0][0] = 1;

  for (int n = 0; n <= N; ++n) {
    for (int i = 0; i <= IJK[0]; ++i) {
      for (int j = 0; j <= IJK[1]; ++j) {
        for (int k = 0; k <= IJK[2]; ++k) {
          // 1 が出たとき (i, j, k => i, j, k への遷移)
          dp[i][j][k] += 1.0/6.0 * dp[i][j][k];
          // 2 が出たとき (i, j, k => i+1, j, k への遷移)
          if (i + 1 <= IJK[0]) dp[i+1][j][k] += 1.0/6.0 * dp[i][j][k];
          else dp[IJK[0]][IJK[1]][IJK[2]] += 1.0/6.0 * dp[i][j][k];
          // 3 が出たとき (i, j, k => i, j+1, k への遷移)
          if (j + 1 <= IJK[1]) dp[i][j+1][k] += 1.0/6.0 * dp[i][j][k];
          else dp[IJK[0]][IJK[1]][IJK[2]] += 1.0/6.0 * dp[i][j][k];
          // 4 が出たとき (i, j, k => i+2, j, k への遷移)
          if (i + 2 <= IJK[0]) dp[i+2][j][k] += 1.0/6.0 * dp[i][j][k];
          else dp[IJK[0]][IJK[1]][IJK[2]] += 1.0/6.0 * dp[i][j][k];
          // 5 が出たとき (i, j, k => i, j, k+1 への遷移)
          if (k + 1 <= IJK[2]) dp[i][j][k+1] += 1.0/6.0 * dp[i][j][k];
          else dp[IJK[0]][IJK[1]][IJK[2]] += 1.0/6.0 * dp[i][j][k];
          // 6 が出たとき (i, j, k => i+1, j+1, k への遷移)
          if (i + 1 <= IJK[0] && j + 1 <= IJK[1]) dp[i+1][j+1][k] += 1.0/6.0 * dp[i][j][k];
          else dp[IJK[0]][IJK[1]][IJK[2]] += 1.0/6.0 * dp[i][j][k];
        }
      }
    }
  }

  cout << "Answer is " << dp[IJK[0]][IJK[1]][IJK[2]] << endl;
}