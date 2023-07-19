#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;

  vector<int> influenced(n, 0);
  vector<vector<int>> xy(n, vector<int>(2));

  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    xy[i] = { x, y };
  }

  vector<vector<int>> cur;
  vector<vector<int>> next;

  cur.push_back({ xy[0][0], xy[0][1] });
  influenced[0] = 1;

  while (cur.size() > 0) {
    for (auto e: cur) {
      for (int i = 0; i < n; ++i) {
        double dist_2 = (e[0] - xy[i][0]) * (e[0] - xy[i][0]) + (e[1] - xy[i][1]) * (e[1] - xy[i][1]);
        if (dist_2 <= d * d) {
          if (influenced[i] == 0) {
            next.push_back({ xy[i][0], xy[i][1] });
          }
          influenced[i] = 1;
        }
      }
    }
    cur = next;
    next = {};
  }

  for (auto e: influenced) {
    if (e == 0) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }

  return 0;
}