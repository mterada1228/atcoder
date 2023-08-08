#include <bits/stdc++.h>
using namespace std;

int main() {
  string X;
  cin >> X;

  bool flg = true;

  // 条件1
  char x_1 = X[0];
  for (int i = 1; i < 4; ++i) {
    if (X[i] != x_1) flg = false;
  }

  if (flg) {
    cout << "Weak" << endl;
    return 0;
  }

  flg = true;

  // 条件2
  for (int i = 0; i < 3; ++i) {
    int xi = X[i] - '0';
    int xip1 = X[i + 1] - '0';

    if (xip1 != (xi + 1) % 10) flg = false;
  }

  if (flg) {
    cout << "Weak" << endl;
    return 0;
  }

  cout << "Strong" << endl;

  return 0;
}