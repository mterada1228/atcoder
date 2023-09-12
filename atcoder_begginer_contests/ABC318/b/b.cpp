#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> arr(100, vector<int>(100, 0));

  for (int i = 0; i < n; ++i) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int j = a; j < b; ++j) {
      for (int k = c; k < d; ++k) {
        arr[k][j] = 1;
      }
    } 
  }

  int sum = 0;
  for (auto e: arr) {
    for (auto f: e) {
      if (f == 1) ++sum;
    }
  }

  cout << sum << endl;

  return 0;
}