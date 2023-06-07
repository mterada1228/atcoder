#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> A(n, vector<int>(n));
  vector<vector<int>> B(n, vector<int>(n));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> B[i][j];
    }
  }

  vector<vector<int>> tmp_A(n, vector<int>(n));

  for (int k = 0; k < 4; ++k) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        tmp_A[i][j] = A[j][n - 1 - i];
      }
    }

    bool flg = true;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (tmp_A[i][j] == 1) {
          if (B[i][j] != 1) {
            flg = false;
          }
        }
      }
    }

    if (flg) {
      cout << "Yes" << endl;
      return 0;
    }

    A = tmp_A;
  }

  cout << "No" << endl;

  return 0;
}