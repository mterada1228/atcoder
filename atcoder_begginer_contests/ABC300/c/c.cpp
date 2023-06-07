#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> C(h, vector<char>(w));
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> C[i][j];
    }
  }

  map<int, int> mp;

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (C[i][j] == '#') {
        int size = 0;
        for (int d = 1; d < min(h, w); ++d) {
          if (
            i + d >= h ||
            i - d < 0 ||
            j + d >= w ||
            j - d < 0
          ) {
            ++mp[size];
            size = 0;
            break;
          } else {
            if (
              C[i + d][j + d] == '#' &&
              C[i + d][j - d] == '#' &&
              C[i - d][j + d] == '#' &&
              C[i - d][j - d] == '#'
            ) {
              ++size;
            } else {
              ++mp[size];
              size = 0;
              break;
            }
          }
        }
      }
    }
  }

  int n = min(h, w);
  for (int i = 1; i <= n; ++i) {
    cout << mp[i] << " ";
  }
  cout << endl;

  return 0;
}