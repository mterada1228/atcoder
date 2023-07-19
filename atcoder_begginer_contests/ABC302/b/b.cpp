#include <bits/stdc++.h>
using namespace std;

vector<int> di = { -1, -1, 0, 1, 1, 1, 0, -1 };
vector<int> dj = { 0, 1, 1, 1, 0, -1, -1, -1 };

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> S(h, vector<char>(w));

  for (int i = 0; i < h; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < s.size(); ++j) {
      S[i][j] = s[j];
    }
  }

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (S[i][j] == 's') {
        for (int k = 0; k < 8; ++k) {
          int cnt = 0;
          for (int l = 1; l <= 4; ++l) {
            int ni = i + di[k] * l;
            int nj = j + dj[k] * l;

            if (ni < 0 || ni >= h) break;
            if (nj < 0 || nj >= w) break;

            if (cnt == 0) {
              if (S[ni][nj] != 'n') break;
            } else if (cnt == 1) {
              if (S[ni][nj] != 'u') break;
            } else if (cnt == 2) {
              if (S[ni][nj] != 'k') break;
            } else if (cnt == 3) {
              if (S[ni][nj] != 'e') break;
            }

            ++cnt;
          }

          if (cnt == 4) {
            for (int m = 0; m <= 4; ++m) {
              cout << i + di[k] * m + 1 << " " << j + dj[k] * m + 1 << endl;
            }
            return 0;
          }
        }
      } 
    }
  }

  return 0;
}