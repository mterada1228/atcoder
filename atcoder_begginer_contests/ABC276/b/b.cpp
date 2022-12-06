#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  map<int, vector<int>> mp;

  for (int i = 0; i < m; ++i) {
    int a, b;

    cin >> a >> b;

    mp[a].push_back(b);
    mp[b].push_back(a);
  }

  for (int i = 1; i <= n; ++i) {
    sort(mp[i].begin(), mp[i].end());
    cout << mp[i].size() << " ";
    for (auto e: mp[i]) {
      cout << e << " ";
    }
    cout << endl;
  }

  return 0;
}