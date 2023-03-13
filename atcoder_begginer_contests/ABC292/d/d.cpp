#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  map<int, vector<int>> G; 
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;

    if (u != v) {
      G[u].push_back(v);
      G[v].push_back(u);
    } else {
      G[u].push_back(v);
    }
  }

  vector<bool> seen(n + 1, false);
  queue<int> todo;

  for (int i = 1; i <= n; ++i) {
    if (seen[i]) continue;

    // BFS
    todo.push(i);

    int top_cnt = 0;
    int side_cnt = 0;

    while (!todo.empty()) {
      int next = todo.front();
      todo.pop();

      if (!seen[next]) {
        ++top_cnt;

        for (auto e: G[next]) {
          if (seen[e]) continue;

          ++side_cnt;
          todo.push(e);
        }
      }

      seen[next] = true;
    }

    if (top_cnt != side_cnt) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}