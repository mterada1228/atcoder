#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> A(m, vector<int>(n));

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> A[i][j];
    }
  }

  vector<vector<int>> arr(n + 1, vector<int>(n + 1, 1));

  for (int i = 0; i <= n; ++i) {
    arr[i][i] = 0;
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n - 1; ++j) {
      arr[A[i][j]][A[i][j + 1]] = 0;
      arr[A[i][j + 1]][A[i][j]] = 0;
    }
  }

  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      sum += arr[i][j];
    }
  }

  cout << sum / 2 << endl;

  return 0;
}