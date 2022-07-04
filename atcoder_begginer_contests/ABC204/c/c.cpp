#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  map<int, vector<int>> load;

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    load[a].push_back(b);
  }

  int cnt = 0;

  for (int i = 1; i <= n; ++i) {
    queue<int> todo;
    vector<int> visit(n + 1, 0);

    // スタート地点
    ++cnt; // スタート = ゴール
    todo.push(i);

    // 探索の開始
    while(!todo.empty()) {
      // 訪問先を取り出す
      int s = todo.front();
      todo.pop();
      visit[s] = 1;

      // 訪問先から行ける都市を取り出す
      vector<int> next = load[s];
      
      // 訪問先にまだ訪れていなければ、訪問済みにしてカウントをプラスし、次の訪問先とする。
      for (auto e: next) {
        if (visit[e] == 0) {
          ++cnt;
          visit[e] = 1;
          todo.push(e);
        }
      }
    }
  }

  cout << cnt << endl;

  return 0;
}