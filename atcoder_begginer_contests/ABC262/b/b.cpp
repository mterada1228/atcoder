#include <bits/stdc++.h>
using namespace std;

bool exist(vector<int> array, int num) {
  auto result = find(array.begin(), array.end(), num);
  if (result == array.end()) {
    return false;
  } else {
    return true;
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  map<int, vector<int>> mp;

  for (int i = 0; i < m; ++i) {
    int u, v;

    cin >> u >> v;

    mp[u].push_back(v);
    mp[v].push_back(u);
  }

  int cnt = 0;

  for (int a = 1; a <= n; ++a) {
    for (int b = a + 1; b <= n; ++b) {
      for (int c = b + 1; c <= n; ++c) {
        if (exist(mp[a], b)) {
          if (exist(mp[b], c)) {
            if (exist(mp[c], a)) {
              ++cnt;
            }
          }
        }
      }
    }
  }

  cout << cnt << endl;

  return 0;
}