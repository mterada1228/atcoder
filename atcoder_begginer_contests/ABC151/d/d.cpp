#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};

const int INF = 1000000000;

// 緩和を行う関数
template<class T> void chmin(T &a, T b) {
  if (a > b) {
    a = b;
  }
}

template<class T> void chmax(T &a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> maze(h, vector<char>(w));

  for (int i = 0; i < h; ++i) {
    for (int k = 0; k < w; ++k) {
      char m;
      cin >> m;
      maze[i][k] = m;
    }
  }

  // 答え
  int max_n = 0;

  // start 位置で全て試す
  for (int i = 0; i < h; ++i) {
    for (int k = 0; k < w; ++k) {
      // # の場所はスタート地点になり得ない。
      if (maze[i][k] == '#') continue;

      // BFS では最短距離を求めることが可能。
      vector<vector<int>> dist(h, vector<int>(w, INF));
      queue<vector<int>> que;

      dist[i][k] = 0;
      que.push({i, k});

      while (!que.empty()) {
        vector<int> v = que.front();
        que.pop();

        // BFS における次の探索先
        for (int j = 0; j < 4; ++j) {
          int nx = v[0] + dx[j];
          int ny = v[1] + dy[j];

          // 迷路の範囲外になってしまう場合はスキップする
          if (ny < 0 || nx >= h || nx < 0 || ny >= w) continue;

          // 移動不可能なマスであればスキップする
          if (maze[nx][ny] == '#') continue;

          // すでに探索済みであればスキップする
          if (dist[nx][ny] != INF) continue;

          // todo にエンキューして、距離を確定する
          que.push(vector<int> {nx, ny});
          chmin(dist[nx][ny], dist[v[0]][v[1]] + 1);
        }
      }

      // 最大の距離となる値を求める
      for (auto e: dist) {
        for (auto f: e) {
          if (f == INF) continue;
          chmax(max_n, f);
        }
      }
    }
  }

  cout << max_n << endl;

  return 0;
}