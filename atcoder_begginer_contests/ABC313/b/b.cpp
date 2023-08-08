#include <bits/stdc++.h>
using namespace std;

int n, m;
set<int> roots;
vector<vector<int>> G;

void DFS(int i, vector<int> seen) {
  if (G[i].size() == 0) {
    roots.insert(i);
    return;
  }

  for (auto e: G[i]) {
    if (seen[e] == 0) {
      seen[e] = 1;
      DFS(e, seen);
    }
  }
}

int main() {
  cin >> n >> m;

  G.resize(n);

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    G[b - 1].push_back(a - 1);
  }

  for (int i = 0; i < n; ++i) {
    vector<int> seen(n, 0);
    DFS(i, seen);
  }

  if (roots.size() > 1) {
    cout << -1 << endl;
  } else {
    auto itr = roots.begin();
    cout << *itr + 1 << endl;
  }

  return 0;
}