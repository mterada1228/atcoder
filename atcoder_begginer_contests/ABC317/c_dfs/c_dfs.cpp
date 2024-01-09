#include <bits/stdc++.h>
using namespace std;

int ans = 0;
vector<vector<pair<int, int>>> arr;
vector<int> todo;

void DFS(int i, int sum) {
  todo[i] = 1;
  ans = max(ans, sum);

  for (auto e: arr[i]) {
    if (todo[e.first] == 0) DFS(e.first, sum + e.second);
  }

  // 再帰を抜けるときに todo を 0 に戻すことでルートを全探索できる。
  todo[i] = 0;
}

int main() {
  int n, m;
  cin >> n >> m;

  arr.resize(n + 1);
  todo.resize(n + 1, 0);

  for (int i = 0; i < m; ++i) {
    int a, b, c;
    cin >> a >> b >> c;

    arr[a].push_back({ b, c });
    arr[b].push_back({ a, c });
  }

  for (int i = 1; i <= n; ++i) {
    DFS(i, 0);
  }

  cout << ans << endl;

  return 0;
}