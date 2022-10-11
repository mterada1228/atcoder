#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  vector<vector<long long>> seen(n, vector<long long>(n, -1));

  queue<vector<long long>> todo;

  todo.push({ 0, 0 });
  seen[0][0] = 0;

  while (!todo.empty()) {
    vector<long long> v = todo.front();
    todo.pop();

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (pow(v[0] - i, 2) + pow(v[1] - j, 2) == m) {
          if (seen[i][j] == -1) {
            todo.push({i, j});
            seen[i][j] = seen[v[0]][v[j]] + 1;
          }
        }
      }
    }
  }

  for (auto e: seen) {
    for (auto f: e) {
      cout << f << " ";
    }
    cout << endl;
  }

  return 0;
}