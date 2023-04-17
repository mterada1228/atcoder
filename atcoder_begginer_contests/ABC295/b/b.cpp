#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;

  vector<vector<char>> rc(r, vector<char>(c));

  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      char tmp;
      cin >> tmp;

      rc[i][j] = tmp;
    }
  }

  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      if (rc[i][j] != '.' && rc[i][j] != '#') {
        for (int k = 0; k < r; ++k) {
          for (int l = 0; l < c; ++l) {
            if (rc[k][l] == '#') {
              int x = rc[i][j] - '0';
              if ((abs(i - k) + abs(j - l)) <= x) {
                rc[k][l] = '.';
              }
            }
          }
        }
        rc[i][j] = '.';
      }
    }
  }

  for (auto e: rc) {
    for (auto f: e) {
      cout << f;
    }
    cout << endl;
  }

  return 0;
} 