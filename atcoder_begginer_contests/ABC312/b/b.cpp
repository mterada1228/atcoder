#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> S;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.push_back(s);
  }

  for (int i = 0; i <= n - 9; ++i) {
    for (int j = 0; j <= m - 9; ++j) {
      bool flg = true;

      // 左上チェック
      for (int k = 0; k <= 2; ++k) {
        for (int l = 0; l <= 2; ++l) {
          if (S[i + k][j + l] == '.') flg = false;
        }
      }

      for (int l = 0; l <= 3; ++l) {
        if (S[i + 3][j + l] == '#') flg = false;
      }

      for (int k = 0; k <= 3; ++k) {
        if (S[i + k][j + 3] == '#') flg = false;
      }

      // 右下チェック
      for (int k = 6; k <= 8; ++k) {
        for (int l = 6; l <= 8; ++l) {
          if (S[i + k][j + l] == '.') flg = false;
        }
      }

      for (int l = 5; l <= 8; ++l) {
        if (S[i + 5][j + l] == '#') flg = false;
      }

      for (int k = 5; k <= 8; ++k) {
        if (S[i + k][j + 5] == '#') flg = false;
      }

      if (flg) {
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }

  return 0;
}