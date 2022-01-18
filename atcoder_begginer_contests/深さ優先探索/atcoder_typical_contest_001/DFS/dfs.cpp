#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int H, W, ny, nx;
vector<int> v(2, 0);
vector<int> st(2, 0);
vector<int> dx {1, 0, -1, 0};
vector<int> dy {0, 1, 0, -1};

int main() {
  cin >> H >> W;

  // 経路情報
  vector<vector<char>> meiz(H, vector<char>(W));
  for (int i = 0; i < H; ++i) {
    string tmp;
    cin >> tmp;
    for (int k = 0; k < W; ++k) {
      meiz[i][k] = tmp[k];
      if (tmp[k] == 's') {
        st[0] = i;
        st[1] = k;
      } 
    }
  }

  // 訪問済みかどうかをチェックするリスト
  vector<vector<bool>> seen(H, vector<bool>(W, false));

  // 初期状態
  stack<vector<int>> todo;
  todo.push(st);

  // 深さ優先探索
  while(!todo.empty()) {
    v = todo.top();
    todo.pop();

    for(int i = 0; i < 4; ++i) {
      ny = v[0] + dy[i];
      nx = v[1] + dx[i];

      // 画面外になる場合はスキップ
      if (ny >= H || nx >= W || ny < 0 || nx < 0) continue;

      // 進入不可の場合もスキップ
      if (meiz[ny][nx] == '#') continue;

      // 訪問済みの場合もスキップ
      if (seen[ny][nx]) continue;

      // ゴールに辿り着いた場合は Yes を出力して探索を終了する
      if (meiz[ny][nx] == 'g') {
        cout << "Yes" << endl;
        return 0;
      }

      // スタックして、訪問済みとする
      todo.push(vector<int> {ny, nx});
      seen[ny][nx] = true;
    }
  }

  // 探索終了してゴールしていないならば No を出力
  cout << "No" << endl;
}