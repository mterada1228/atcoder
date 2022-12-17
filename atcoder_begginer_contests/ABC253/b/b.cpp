#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};

const int INF = 1000000000;

template<class T> void chmin(T &a, T b) {
  if (a > b) {
    a = b;
  }
}

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> arr(h, vector<char>(w));

  int start_i = -1;
  int start_j = -1;
  int goal_i = -1;
  int goal_j = -1;

  for (int i = 0; i < h; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < s.size(); ++j) {
      arr[i][j] = s[j];
      if (s[j] == 'o') {
        if (start_i == -1) {
          start_i = i;
          start_j = j;
        } else {
          goal_i = i;
          goal_j = j;
        }
      } 
    }
  }

  queue<vector<int>> que;
  vector<vector<int>> dist(h, vector<int>(w, INF));

  que.push({start_i, start_j});
  dist[start_i][start_j] = 0;

  while (!que.empty()) {
    vector<int> v = que.front();
    que.pop();

    for (int i = 0; i < 4; ++i) {
      int nx = v[0] + dx[i];
      int ny = v[1] + dy[i];

      // マスの外には行けない
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;

      // 探索済みならスキップ
      if (dist[nx][ny] != INF) continue;

      que.push({ nx, ny });
      chmin(dist[nx][ny], dist[v[0]][v[1]] + 1);
    }
  }

  cout << dist[goal_i][goal_j] << endl;

  return 0;
}