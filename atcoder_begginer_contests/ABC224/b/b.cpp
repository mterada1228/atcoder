#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<int>> A(h, vector<int>(w));
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> A[i][j];
    }
  }

  string ans = "Yes";

  for (int i1 = 0; i1 < h; ++i1) {
    for (int j1 = 0; j1 < w; ++j1) {
      for (int i2 = i1 + 1; i2 < h; ++i2) {
        for (int j2 = j1 + 1; j2 < w; ++j2) {
          if (A[i1][j1] + A[i2][j2] > A[i2][j1] + A[i1][j2]) ans = "No";
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}