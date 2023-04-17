#include <bits/stdc++.h>
using namespace std;

int h, w;
long long cnt = 0;
vector<vector<int>> hw;
vector<int> start = { 0, 0 };
vector<int> goal;

void func(vector<int> next, vector<int> root) {
  root.push_back(hw[next[0]][next[1]]);

  if (next[0] == h - 1 && next[1] == w - 1) {
    set<int> st;
    for (auto e: root) {
      st.insert(e);
    }

    if (root.size() == st.size()) {
      ++cnt;
    }
    return;
  } else {
    if (next[0] + 1 <= h - 1) {
      func({ next[0] + 1, next[1] }, root);
    }

    if (next[1] + 1 <= w - 1) {
      func({ next[0], next[1] + 1 }, root);
    }
  }
}

int main() {
  cin >> h >> w;

  hw.resize(h, vector<int>(w));

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> hw[i][j];
    }
  }

  goal = { h - 1, w - 1 };
  vector<int> root = { hw[0][0] };

  func({ 0, 1 }, root);
  func({ 1, 0 }, root);

  cout << cnt << endl;

  return 0;
}