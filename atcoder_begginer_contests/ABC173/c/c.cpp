#include <bits/stdc++.h>
using namespace std;

bool exist(vector<int> array, int num) {
  auto result = find(array.begin(), array.end(), num);
  if (result == array.end()) {
    return false;
  } else {
    return true;
  }
}

int main() {
  int h, w, k;
  cin >> h >> w >> k;

  vector<vector<char>> area(h, vector<char>(w));

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      char c;
      cin >> c;
      area[i][j] = c;
    }
  }

  int ans = 0;

  for (int bit_h = 0; bit_h < (1<<h); ++bit_h) {
    for (int bit_w = 0; bit_w < (1<<w); ++bit_w) {
      vector<int> exclude_h;
      vector<int> exclude_w;

      for (int i = 0; i < h; ++i) {
        if (bit_h & (1<<i)) {
          exclude_h.push_back(i);
        }
      }
      for (int i = 0; i < w; ++i) {
        if (bit_w & (1<<i)) {
          exclude_w.push_back(i);
        }
      }

      int cnt = 0;

      for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
          if (area[i][j] == '#') {
            if (!exist(exclude_h, i)) {
              if (!exist(exclude_w, j)) {
                ++cnt;
              }
            }
          }
        }
      }

      if (cnt == k) {
        ++ans;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
