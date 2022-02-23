#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, X;

int main() {
  cin >> N >> X;

  vector<int> a(N), b(N);
  for (int j = 0; j < N; ++j) cin >> a[j] >> b[j];

  vector<vector<int>> dp(N + 1, vector<int>(X + 1, 0));

  dp[0][0] = 1;

  for (int i = 0; i < N; ++i) {
    for (int x = 0; x <= X; ++x) {
      if (dp[i][x]) {
        if (x + a[i] <= X) {
          dp[i + 1][x + a[i]] = 1;
        }
        if (x + b[i] <= X) {
          dp[i + 1][x + b[i]] = 1;
        }
      }
    }
  }

  if (dp[N][X]) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}