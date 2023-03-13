#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> C;
  for (int i = 0; i < m; ++i) {
    int c_i;
    cin >> c_i;

    vector<int> c(c_i);
    for (int j = 0; j < c_i; ++j) {
      cin >> c[j];
    }
    C.push_back(c);
  }

  int cnt = 0;

  for (int bit = 0; bit < (1<<m); ++bit) {
    set<int> vals;

    for (int i = 0; i < m; ++i) {
      if (bit & (1<<i)) {
        for (auto e: C[i]) {
          vals.insert(e);
        }
      }
    }

    if (vals.size() == n) {
      ++cnt;
    }
  }

  cout << cnt << endl;

  return 0;
}