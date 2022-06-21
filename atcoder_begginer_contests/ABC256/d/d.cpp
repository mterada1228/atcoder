#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y) {
  if (x.first == y.first) {
    return x.second < y.second; 
  }
  return x.first < y.first;
}

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> LR;

  for (int i = 0; i < N; ++i) {
    int l, r;
    cin >> l >> r;
    LR.push_back({l, 0});
    LR.push_back({r, 1});
  }

  sort(LR.begin(), LR.end(), compare);

  int cnt = 0;

  for (auto x: LR) {
    if (x.second == 0) {
      if (cnt == 0) cout << x.first << " ";
      ++cnt;
    } else {
      if (cnt == 1) cout << x.first << endl;
      --cnt; 
    }
  }

  return 0;
}