#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<long long, long long>> xy;
  for (int i = 0; i < n; ++i) {
    long long x, y;
    cin >> x >> y;
    xy.push_back({ x, y });
  }

  long long cnt = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      for (int k = j + 1; k < n; ++k) {
        pair<long long, long long> j_xy = { xy[j].first - xy[i].first, xy[j].second - xy[i].second };
        pair<long long, long long> k_xy = { xy[k].first - xy[i].first, xy[k].second - xy[i].second };

        long long s = j_xy.first * k_xy.second - k_xy.first * j_xy.second;

        if (s != 0) ++cnt;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}