#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z;

  cin >> x >> y >> z;

  if (x >= 0) {
    if (y <= 0 || x <= y) {
      cout << abs(x) << endl;
      return 0;
    }

    if (z <= y) {
      if (0 <= z) {
        cout << abs(x) << endl;
        return 0;
      } else {
        cout << 2 * abs(z) + abs(x) << endl;
        return 0;
      }
    }
  } else {
    if (0 <= y || y <= x) {
      cout << abs(x) << endl;
      return 0;
    }

    if (y <= z) {
      if (z <= 0) {
        cout << abs(x) << endl;
        return 0;
      } else {
        cout << 2 * abs(z) + abs(x) << endl;
        return 0;
      }
    }
  }

  cout << -1 << endl;

  return 0;
}