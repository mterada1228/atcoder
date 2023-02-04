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

  for (int i = 0; i < w; ++i) {
    for (int j = 0; j < h; ++j) {
      cout << A[j][i] << " ";
    }
    cout << endl;
  }

  return 0;
}