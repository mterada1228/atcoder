#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  map<vector<int>, set<vector<int>>> mp;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      // k - i >= 0
      for (int k = 1; k <= min(pow(m, 0.5) + i, (double)n); ++k) {
        double l = j + pow(m - pow(k - i, 2), 0.5);
        if (l == floor(l) && l > 0 && l <= n) {
          mp[{i, j}].insert({ k, (int)l });
        }

        l = j - pow(m - pow(k - i, 2), 0.5);
        if (l == floor(l) && l > 0 && l <= n) {
          mp[{i, j}].insert({ k, (int)l });
        }
      }
      // k - i < 0
      for (int k = n; k >= max(pow(m, 0.5) + i, (double)0); --k) {
        double l = j + pow(m - pow(k - i, 2), 0.5);
        if (l == floor(l) && l > 0 && l <= n) {
          mp[{i, j}].insert({ k, (int)l });
        }

        l = j - pow(m - pow(k - i, 2), 0.5);
        if (l == floor(l) && l > 0 && l <= n) {
          mp[{i, j}].insert({ k, (int)l });
        }
      }
    }
  }

  vector<vector<int>> ans(n + 1, vector<int>(n + 1, -1));

  ans[1][1] = 0;

  queue<vector<int>> todo;
  todo.push({ 1, 1 });

  while(!todo.empty()) {
    vector<int> v = todo.front();
    todo.pop();

    for (auto e: mp[v]) {
      // 探索済みはスキップする
      if (ans[e[0]][e[1]] != -1) continue;

      ans[e[0]][e[1]] = ans[v[0]][v[1]] + 1;
      todo.push(e);
    }
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}