#include <bits/stdc++.h>
using namespace std;

bool check(double y1, double y2, double x1, double x2, double x, double y) {
  double left = y - y1;
  double right = (y2 - y1) / (x2 - x1) * (x - x1);
  if (left == right) {
    return true;
  } else {
    return false;
  }
}


int main() {
  int N;

  cin >> N;

  vector<vector<double>> xy(N, vector<double>(2));

  for (int i = 0; i < N; ++i) cin >> xy[i][0] >> xy[i][1];

  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      if (xy[i][0] == xy[j][0]) {
        for (int k = 0; k < N; ++k) {
          if (i == k || j == k) continue;
          if (xy[i][0] == xy[k][0]) {
            cout << "Yes" << endl;
            return 0;
          }
        }
      } else {
        for (int k = 0; k < N; ++k) {
          if (i == k || j == k) continue;
          if (check(xy[i][1], xy[j][1], xy[i][0], xy[j][0], xy[k][0], xy[k][1])) {
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}