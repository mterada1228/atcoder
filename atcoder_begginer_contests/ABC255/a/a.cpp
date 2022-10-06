#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;

  vector<vector<int>> arr(3, vector<int>(3, 0));

  for (int i = 1; i < 3; ++i) {
    for (int j = 1; j < 3; ++j) {
      cin >> arr[i][j];
    }
  }

  cout << arr[r][c] << endl;

  return 0;
}