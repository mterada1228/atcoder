#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;

  vector<int> D;

  int sum = 0;

  for (int i = 0; i < m; ++i) {
    int d;
    cin >> d;
    D.push_back(d);

    sum += d;
  }

  int mid_day = sum / 2 + 1;

  for (int i = 0; i < m; ++i) {
    mid_day -= D[i];

    if (mid_day > 0) {
      continue;
    } else {
      cout << i + 1 << " " << D[i] + mid_day << endl;
      return 0;
    }
  }

  return 0;
}