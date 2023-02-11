#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<char>> S(n, vector<char>(n));
  vector<vector<char>> T(n, vector<char>(n));

  int s_min_x = 201;
  int s_min_y = 201;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      char s;
      cin >> s;

      if (s == '#') {
        s_min_x = min(s_min_x, j);
        s_min_y = min(s_min_y, i);
      }

      S[i][j] = s;
    }
  }


  int t_min_x = 201;
  int t_min_y = 201;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      char t;
      cin >> t;

      if (t == '#') {
        t_min_x = min(t_min_x, j);
        t_min_y = min(t_min_y, i);
      }

      T[i][j] = t;
    }
  }

  // 左端, 右端に移動
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (S[i][j] == '#') {
        S[i][j] = '.';
        S[i - s_min_y][j - s_min_x] = '#';
      }

      if (T[i][j] == '#') {
        T[i][j] = '.';
        T[i - t_min_y][j - t_min_x] = '#';
      }
    }
  }

  cout << "T: " << endl;
  for (auto e: T) {
    for (auto f: e) {
      cout << f;
    }
    cout << endl;
  }

  vector<vector<char>> roated_S(n, vector<char>(n));

  for (int k = 0; k < 4; ++k) {
    for (int i = 0; i < n; ++i){
      for (int j = 0; j < n; ++j){
        roated_S[i][j] = S[n - 1 - j][i];
      }
    }

    S = roated_S;

    cout << "S: " << endl;
    for (auto e: S) {
      for (auto f: e) {
        cout << f;
      }
      cout << endl;
    }
  }

  return 0;
}