#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> cells;
  for (int i = 0; i < 9; ++i) {
    int c;
    cin >> c;
    cells.push_back(c);
  }

  vector<vector<int>> rows = {
    { 0, 1, 2 },
    { 3, 4, 5 },
    { 6, 7, 8 },
    { 0, 3, 6 },
    { 1, 4, 7 },
    { 2, 5, 8 },
    { 0, 4, 8 },
    { 2, 4, 6 }
  };

  vector<int> order = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };

  double all = 0;
  double success = 0;

  do {
    ++all;

    bool flg = true;

    for (auto e: rows) {
      int a = e[0];
      int b = e[1];
      int c = e[2];

      if (cells[a] == cells[b]) {
        if (order[a] < order[c] && order[b] < order[c]) flg = false;
      }

      if (cells[b] == cells[c]) {
        if (order[b] < order[a] && order[c] < order[a]) flg = false;
      }

      if (cells[a] == cells[c]) {
        if (order[a] < order[b] && order[c] < order[b]) flg = false;
      }
    } 

    if (flg) ++success;
  } while(next_permutation(order.begin(), order.end()));

  cout << setprecision(10) << success / all << endl;

  return 0;
}