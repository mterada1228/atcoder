#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> hw(h, vector<char>(w));

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> hw[i][j];
    }
  }


  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (hw[i][j] == '.') {
        int cnt = 0;

        if (i - 1 >= 0 && hw[i - 1][j] == '#') ++cnt;
        if (j + 1 < w  && hw[i][j + 1] == '#') ++cnt;
        if (i + 1 < h  && hw[i + 1][j] == '#') ++cnt;
        if (j - 1 >= 0 && hw[i][j - 1] == '#') ++cnt;

        if (cnt >= 2) {
          cout << i + 1 << " " << j + 1 << endl;
          return 0;
        }
      }
    }
  }

  return 0;
}