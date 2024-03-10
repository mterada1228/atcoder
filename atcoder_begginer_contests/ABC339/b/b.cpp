#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {-1, 0, 1, 0};

int main() {
  int h, w, n;
  cin >> h >> w >> n;

  vector<vector<char>> hw(h, vector<char>(w, '.'));

  int nx = 0, ny = 0, d_ind = 0;

  for (int i = 0; i < n; ++i) {
    if (hw[ny][nx] == '.') {
      hw[ny][nx] = '#';
      d_ind = (d_ind + 1) % 4;
    } else {
      hw[ny][nx] = '.';
      d_ind = d_ind - 1;

      if (d_ind < 0) {
        d_ind = 3;
      } 
    }

    nx += dx[d_ind];
    ny += dy[d_ind];

    if (nx < 0) nx = w - 1;
    if (nx >= w) nx = 0;
    if (ny < 0) ny = h - 1;
    if (ny >= h) ny = 0;
  }

  for (auto e: hw) {
    for (auto f: e) {
      cout << f;
    }
    cout << endl;
  }

  return 0;
}