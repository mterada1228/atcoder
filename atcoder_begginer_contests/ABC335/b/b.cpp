#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> ans;

  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= n; ++j) {
      for (int k = 0; k <= n; ++k) {
        if (i + j + k <= n) {
          ans.push_back({i, j, k});
        }
      }
    }
  }

  for (auto e: ans) {
    for (auto f: e) {
      cout << f << " ";
    }
    cout << endl;
  }

  return 0;
}