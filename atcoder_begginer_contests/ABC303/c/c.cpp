#include <bits/stdc++.h>
using namespace std;

int h, k;
map<vector<int>, int> xy;

bool check(vector<int> next) {
  --h;

  if (h < 0) return false;

  if (h < k) {
    if (xy[next]) h = k;
    xy[next] = 0;
  }

  return true;
}

int main() {
  int n, m;
  cin >> n >> m >> h >> k;

  string s;
  cin >> s;

  for (int i = 0; i < m; ++i) {
    int x, y;
    cin >> x >> y;

    xy[{ x, y }] = 1;
  }

  vector<int> cur = { 0, 0 };

  for (auto e: s) {
    vector<int> next;

    if (e == 'R') {
      next = { cur[0] + 1, cur[1] };

      if (!check(next)) {
        cout << "No" << endl;
        return 0;
      }
    } else if (e == 'L') {
      next = { cur[0] - 1, cur[1] };

      if (!check(next)) {
        cout << "No" << endl;
        return 0;
      }
    } else if (e == 'U') {
      next = { cur[0], cur[1] + 1 };

      if (!check(next)) {
        cout << "No" << endl;
        return 0;
      }
    } else if (e == 'D') {
      next = { cur[0], cur[1] - 1 };

      if (!check(next)) {
        cout << "No" << endl;
        return 0;
      }
    }

    cur = next;
  }

  cout << "Yes" << endl;

  return 0;
}