#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<char>> A(n, vector<char>(n));

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < n; ++j) {
      A[i][j] = s[j];
    }
  }

  vector<vector<char>> ans(n, vector<char>(n));

  for (int j = 0; j < n - 1; ++j) {
    ans[0][j + 1] = A[0][j];
  }

  for (int i = 0; i < n - 1; ++i) {
    ans[i + 1][n - 1] = A[i][n - 1];
  }

  for (int j = n - 1; j >= 1; --j) {
    ans[n - 1][j - 1] = A[n - 1][j];
  }

  for (int i = n - 1; i >= 1; --i) {
    ans[i - 1][0] = A[i][0];
  }

  for (int i = 1; i < n - 1; ++i) {
    for (int j = 1; j < n - 1; ++j) {
      ans[i][j] = A[i][j];
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << ans[i][j];
    }
    cout << endl;
  }

  return 0;
}