#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<set<int>> Boxes(200001);
  vector<set<int>> Nums(n + 1);
  map<vector<int>, int> Num_times;

  for (int k = 0; k < q; ++k) {
    int x;
    cin >> x;

    if (x == 1) {
      int i, j;
      cin >> i >> j;

      Boxes[i].insert(j);
      Nums[j].insert(i);
      ++Num_times[{j, i}];
    } else if (x == 2) {
      int i;
      cin >> i;

      for (auto e: Nums[i]) {
        for (int l = 0; l < Num_times[{i, e}]; ++l) {
          cout << e << " ";
        }
      }
      cout << endl;
    } else {
      int i;
      cin >> i;

      for (auto e: Boxes[i]) {
        cout << e << " ";
      }
      cout << endl;
    }
  }

  return 0;
}