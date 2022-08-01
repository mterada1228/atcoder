#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main() {
  int n, m;
  cin >> n >> m;

  Graph G(n + 1);

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;

    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> seen(n + 1, 0);
  queue<int> todo;

  todo.push(1);
  seen[1] = 1;

  while (!todo.empty()) {
    int s = todo.front();
    todo.pop();

    for (auto e: G[s]) {
      if (seen[e] == 0) {
        seen[e] = s;
        todo.push(e);
      }
    }
  }

  cout << "Yes" << endl;
  for (int i = 2; i <= n; ++i) {
    cout << seen[i] << endl;
  }

  return 0;
}