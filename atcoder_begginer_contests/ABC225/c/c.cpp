#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<long long>> B;

  for (int i = 0; i < n; ++i) {
    vector<long long> row_B;
    for (int j = 0; j < m; ++j) {
      long long b;
      cin >> b;
      row_B.push_back(b);
    }
    B.push_back(row_B);
  }

  vector<vector<pair<long, long>>> xy(n, vector<pair<long, long>>(m));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      xy[i][j] = { (B[i][j] - 1) / 7, B[i][j] - ((B[i][j] - 1) / 7) * 7 - 1 };
    }
  }

  string ans = "Yes";

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      // 上
      if (i >= 1) {
        if (xy[i - 1][j].first != xy[i][j].first - 1 || 
            xy[i - 1][j].second != xy[i][j].second) ans = "No";
      }
      // 下
      if (i <= n - 2) {
        if (xy[i + 1][j].first != xy[i][j].first + 1 ||
            xy[i + 1][j].second != xy[i][j].second) ans = "No";
      }
      // 左
      if (j >= 1) {
        if (xy[i][j - 1].first != xy[i][j].first ||
            xy[i][j - 1].second != xy[i][j].second - 1) ans = "No";
      }
      // 右
      if (j <= m - 2) {
        if (xy[i][j + 1].first != xy[i][j].first ||
            xy[i][j + 1].second != xy[i][j].second + 1) ans = "No";
      }
    }
  }

  cout << ans << endl;

  return 0;
}