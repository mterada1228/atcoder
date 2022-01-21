#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<vector<char>> maps(10, vector<char>(10));
stack<int> todo;
string tmp;
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};
int nx, ny;
vector<int> st(2, 0);

int main () {
  for (int i = 0; i < 10; ++i) {
    cin >> tmp;
    for (int k = 0; k < 10; ++k) {
      maps[i][k] = tmp[k];
      // 適当な陸地をスタート地点とする
      if(tmp[k] == 'o') {
        st[0] = i;
        st[1] = k;
      }
    }
  }

  // 埋め立て位置を全探索する
  for (int i = 0; i < 10; ++i) {
    for (int k = 0; k < 10; ++k) {
      // 一箇所埋め立てる。元々が陸地の場合はスキップする
      if (maps[i][k] == 'o') continue;
      maps[i][k] = 'o';

      // DFSを用いて全ての陸地に訪れられるかチェック
      vector<vector<bool>> seen(10, vector<bool>(10, false));

      // 初期地点
      stack<vector<int>> todo;
      todo.push(st);

      while (!todo.empty()) {
        vector<int> v = todo.top();
        todo.pop();

        for (int l = 0; l < 4; ++l) {
          ny = v[0] + dy[l];
          nx = v[1] + dx[l];

          // 範囲外となる場合はスキップ
          if (ny < 0 || ny >= 10 || nx < 0 || nx >= 10) continue; 
          // 海となる場合はスキップ
          if (maps[ny][nx] == 'x') continue; 
          // 訪問済みである場合はスキップ
          if (seen[ny][nx]) continue;

          // 訪問済みとしてスタックする
          seen[ny][nx] = true;
          todo.push({ny, nx});
        }
      }
      // 埋め立てた場所は元に戻す
      maps[i][k] = 'x';

      // 全ての地点を訪れられたかをチェックする
      int count_seen = 0;
      int count_land = 0;

      for (int l = 0; l < 10; ++l) {
        for (int m = 0; m < 10; ++m) {
          if (seen[l][m]) ++count_seen;
          if (maps[l][m] == 'o') ++count_land;
        }
      }

      if (count_seen - 1 == count_land) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
}