#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, D;

bool cmp(pair<int, int> a, pair<int, int> b) {
  return a.second < b.second;
}

int main() {
  cin >> N >> D;

  vector<pair<int, int>> walls(N);

  for (int i = 0; i < N; ++i) cin >> walls[i].first >> walls[i].second;

  sort(walls.begin(), walls.end(), cmp);

  // 貪欲法
  int res = 1;
  int current_first = walls[0].second;
  int current_end = walls[0].second + D - 1;

  for (int i = 1; i < N; ++i) {
    // 破壊できる範囲にある壁はスキップする
    if ( (walls[i].first <= current_end) ) {
      continue;
    }

    // 破壊できる範囲にない壁を次の破壊対象とする
    ++res;
    current_first = walls[i].second;
    current_end = walls[i].second + D - 1;
  }

  cout << res << endl;

  return 0;
}