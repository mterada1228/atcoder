#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, m;
  cin >> n >> t >> m;

  vector<vector<int>> hex(n + 1, vector<int>(n + 1, 0));
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    hex[a][b] = 1;
  }

  cout << "debug === " << endl;

  set<vector<int>> binds;

  for (int bit = 0; bit < (1<<n); ++bit) {
    vector<int> bind_arr;
    for (int i = 1; i < n; ++i) {
      if (bit & (1<<i)) bind_arr.push_back(i);
    }

    if (bind_arr.size() == t) {
      binds.insert(bind_arr);
    }
  }

  for (auto e: binds) {
    vector<vector<int>> teams;
    
  }

  return 0;
}