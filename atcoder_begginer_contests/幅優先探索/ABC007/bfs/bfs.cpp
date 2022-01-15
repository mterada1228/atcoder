#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int R, C, sy, sx, gy, gx, ny, nx;
const long long INF = 1LL << 60;
vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};

// 緩和を行う関数
template<class T> void chmin(T &a, T b) {
  if (a > b) {
    a = b;
  }
}

int main() {
  // R: 行数, C: 列数
  cin >> R >> C;

  // スタート地点
  cin >> sy >> sx;
  // ゴール地点
  cin >> gy >> gx;
  // 0 始まりの index に合わせる
  --sy;
  --sx;
  --gy;
  --gx;

  // 迷路情報
  vector<vector<char>> meiz(R, vector<char>(C));
  for (int i = 0; i < R; ++i) {
    string tmp;
    cin >> tmp;
    for (int k = 0; k < C; ++k) {
      meiz[i][k] = tmp[k];
    }
  }

  // 探索のためのデータ構造
  vector<vector<long long>> yx(R, vector<long long>(C, INF));  
  queue<vector<int>> todo;

  // 初期条件 
  yx[sy][sx] = 0;
  todo.push(vector<int> {sy, sx});

  while (!todo.empty()) {
    // todo から訪問先を取り出す
    vector<int> v = todo.front();
    todo.pop();

    // ゴールであれば探索を終了する
    if (v[0] == gy && v[1] == gx) {
      cout << yx[gy][gx] << endl;
      return 0;
    }

    // 移動先は上下左右方向の4箇所
    for (int i = 0; i < 4; ++i) {
      ny = v[0] + dy[i];
      nx = v[1] + dx[i];

      // 迷路の範囲外になってしまう場合はスキップする
      if (ny < 0 || ny >= R || nx < 0 || nx >= C) continue;

      // 移動不可能なマスであればスキップする
      if (meiz[ny][nx] == '#') continue;

      // すでに探索済みであればスキップする
      if (yx[ny][nx] != INF) continue;

      // todo にエンキューして、距離を確定する
      todo.push(vector<int> {ny, nx});
      chmin(yx[ny][nx], yx[v[0]][v[1]] + 1);
    }
  }

  cout << yx[gy][gx] << endl;
}