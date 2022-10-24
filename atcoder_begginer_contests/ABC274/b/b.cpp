#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;

  cin >> h >> w;

  vector<vector<char>> arr(h, vector<char>(w));

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> arr[i][j];
    }
  }

  for (int j = 0; j < w; ++j) {
    int cnt = 0;
    for (int i = 0; i < h; ++i) {
      if (arr[i][j] == '#') ++cnt;
    }
    cout << cnt << " ";
  }

  cout << endl;

  return 0;
}