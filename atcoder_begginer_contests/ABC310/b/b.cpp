#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> P;
  vector<int> C;
  vector<vector<int>> F(n, vector<int>(m + 1, 0));

  for (int i = 0; i < n; ++i) {
    int p;
    cin >> p;
    P.push_back(p);

    int c;
    cin >> c;
    C.push_back(c);

    for (int j = 0; j < c; ++j) {
      int f;
      cin >> f;
      F[i][f] = 1;
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j) continue;

      // 条件1
      if (P[i] >= P[j]) {
        // 条件2
        bool flg = true;
        for (int k = 1; k <= m; ++k) {
          if (F[i][k] == 1 && F[j][k] == 0) {
            flg = false;
          }
        }
        if (flg) {
          // 条件3
          if (P[i] > P[j] || C[i] < C[j]) {
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "No" << endl;

  return 0;
}