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

  for (int i = 0; i < 2 * h; ++i) {
    for (int j = 0; j < w; ++j) {
      int conv_i = i / 2;
      cout << C[conv_i][j];
    }
    cout << endl;
  }

  return 0;
}