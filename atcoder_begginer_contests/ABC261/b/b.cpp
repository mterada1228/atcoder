#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<char>> T(n, vector<char>(n));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> T[i][j];
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (T[i][j] == 'W') {
        if (T[j][i] != 'L') {
          cout << "incorrect" << endl;
          return 0;
        }
      }

      if (T[i][j] == 'L') {
        if (T[j][i] != 'W') {
          cout << "incorrect" << endl;
          return 0;
        }
      }

      if (T[i][j] == 'D') {
        if (T[j][i] != 'D') {
          cout << "incorrect" << endl;
          return 0;
        }
      }
    }
  }

  cout << "correct" << endl;

  return 0;
}