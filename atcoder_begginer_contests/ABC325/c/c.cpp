#include <bits/stdc++.h>
using namespace std;

int h, w;
int ans = 0;
vector<vector<int>> todo;
vector<string> arr;
vector<int> dx = { 0, 1, -1 };
vector<int> dy = { 0, 1, -1 };

void DFS(int i, int j, int l) {
  todo[i][j] = 1;

  if (l == 1) {
    ++ans;
  }

  for (auto x: dx) {
    for (auto y: dy) {
      int nx = j + x;
      int ny = i + y;

      if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
      if (todo[ny][nx] == 1) continue;
      if (arr[ny][nx] == '.') continue;

      DFS(ny, nx, l + 1);
    }
  }
}

int main() {
  cin >> h >> w;

  arr.resize(h);

  for (int i = 0; i < h; ++i) {
    cin >> arr[i]; 
  }

  todo.resize(h, vector<int>(w, 0));

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (arr[i][j] == '#' && todo[i][j] == 0) DFS(i, j, 1);
    }
  }

  cout << ans << endl;

  return 0;
}