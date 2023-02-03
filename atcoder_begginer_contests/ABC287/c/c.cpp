#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

vector<bool> seen;

int main() {
  int n, m;
  cin >> n >> m;

  seen.assign(n + 1, false);

  Graph G(n + 1);

  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;

    G[u].push_back(v);
    G[v].push_back(u);
  }

  int start = 0;

  for (int i = 1; i <= n; ++i) {
    if (G[i].size() == 1) start = i;
  }

  if (start == 0) {
    cout << "No" << endl;
    return 0;
  }

  stack<int> todo;
  todo.push(start);

  seen[start] = true;

  while (!todo.empty()) {
    int v = todo.top();
    todo.pop();

    vector<int> next_V;

    for (auto next_v: G[v]) {
      if (!seen[next_v]) {
        next_V.push_back(next_v);
        seen[next_v] = true;
      }
    }

    if (next_V.size() > 1) {
      cout << "No" << endl;
      return 0;
    }

    for (auto next_v: next_V) {
      todo.push(next_v);
    }
  }

  for (int i = 1; i <= n; ++i) {
    if (!seen[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}