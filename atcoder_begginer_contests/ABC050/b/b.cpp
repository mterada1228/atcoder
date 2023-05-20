#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> T(n);
  for (int i = 0; i < n; ++i) {
    cin >> T[i];
  }

  int m;
  cin >> m;

  vector<vector<int>> PX(m, vector<int>(2));
  for (int i = 0; i < m; ++i) {
    int p, x;
    cin >> p >> x;

    PX[i][0] = p;
    PX[i][1] = x;
  }

  for (auto e : PX) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
      if (i != (e[0] - 1)) {
        sum += T[i];
      } else {
        sum += e[1];
      }
    }
    cout << sum << endl;
  }

  return 0;
}