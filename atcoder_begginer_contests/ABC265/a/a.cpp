#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, n;
  cin >> x >> y >> n;

  // １個当たりの金額が安い方
  if (x <= y / 3) {
    cout << n * x << endl;
    return 0;
  } else {
    int sum = 0;
    while (n >= 3) {
      sum += y;
      n -= 3;
    }

    while (n > 0) {
      sum += x;
      n -= 1;
    }

    cout << sum << endl;
  }

  return 0;
}