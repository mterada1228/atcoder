#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sum_x = 0;
  int sum_y = 0;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    sum_x += x;
    sum_y += y;
  }

  if (sum_x == sum_y) {
    cout << "Draw" << endl;
  } else if (sum_x > sum_y) {
    cout << "Takahashi" << endl;
  } else {
    cout << "Aoki" << endl;
  }

  return 0;
}