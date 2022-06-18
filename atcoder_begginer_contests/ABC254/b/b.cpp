#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> a(n);

  a[0].push_back(1);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      if (j == 0 || j == i) {
        a[i].push_back(1);
      } else {
        a[i].push_back(a[i-1][j-1] + a[i-1][j]);
      }
    } 
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      if (j == i) {
        cout << a[i][j] << endl;
      } else {
        cout << a[i][j] << ' ';
      }
    }
  }

  return 0;
}