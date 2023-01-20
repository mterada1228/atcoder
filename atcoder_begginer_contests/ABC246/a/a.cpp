#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> mp_x;
  map<int, int> mp_y;

  for (int i = 0; i < 3; ++i) {
    int x, y;
    cin >> x >> y;
    
    ++mp_x[x];
    ++mp_y[y];
  }

  for (auto e: mp_x) {
    if (e.second == 1) cout << e.first << " ";
  }

  for (auto e: mp_y) {
    if (e.second == 1) cout << e.first << endl;
  }

  return 0;
}