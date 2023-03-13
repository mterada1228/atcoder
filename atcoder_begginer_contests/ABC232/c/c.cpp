#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> AB(n + 1, vector<int>(n + 1, 0)), CD(n + 1, vector<int>(n + 1, 0));

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    AB[a][b] = AB[b][a] = 1;
  }

  for (int i = 0; i < m; ++i) {
    int c, d;
    cin >> c >> d;
    CD[c][d] = CD[d][c] = 1;
  }

  vector<int> P(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    P[i] = i;
  }

  do {
    bool flg = true;

    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= n; ++j) {
        if (AB[i][j] != CD[P[i]][P[j]]) flg = false;
      }
    }

    if (flg) {
      cout << "Yes" << endl;
      return 0;
    }
  } while(next_permutation(P.begin(), P.end()));

  cout << "No" << endl;

  return 0;
}