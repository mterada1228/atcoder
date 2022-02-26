#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  cin >> N;

  vector<vector<char>> S(N, vector<char>(N));
  for (int i = 0; i < N; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < N; ++j) {
      S[i][j] = s[j];
    }
  } 

  // 横軸のチェック
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j <= N - 6; ++j) {
      int cnt = 0;
      for (int k = 0; k < 6; ++k) {
        if (S[i][j + k] == '#') ++cnt;
      }
      if (cnt >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  // 縦軸のチェック
  for (int i = 0; i <= N - 6; ++i) {
    for (int j = 0; j < N; ++j) {
      int cnt = 0;
      for (int k = 0; k < 6; ++k) {
        if (S[i + k][j] == '#') ++cnt;
      }
      if (cnt >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  // 斜軸のチェック
  for (int i = 0; i <= N - 6; ++i) {
    for (int j = 0; j <= N - 6; ++j) {
      int cnt = 0;
      for (int k = 0; k < 6; ++k) {
        if (S[i + k][j + k] == '#') ++cnt;
      }
      if (cnt >= 4) {
        cout << "Yes" << endl;
        return 0;
      }

      cnt = 0;
      for (int k = 0; k < 6; ++k) {
        if (S[i + k][j + 5 - k] == '#') ++cnt;
      }
      if (cnt >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}
