#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, vector<int>> G;

  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;

    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<bool> seen(1000000001, false);

  stack<int> todo;

  seen[1] = true;
  todo.push(1);

  int max_floor = 1;

  while(!todo.empty()) {
    int v = todo.top();
    todo.pop();

    for (auto next: G[v]) {
      // 訪問ずみはスキップ
      if (seen[next]) continue;

      if (max_floor < next) {
        max_floor = next;
      }

      // 訪問ずみとしてマーク
      seen[next] = true;

      todo.push(next);
    }
  }

  cout << max_floor << endl;

  return 0;
}
