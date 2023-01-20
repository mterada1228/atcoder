#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;

  // x 軸、y 軸上に a, b が存在する場合は例外
  if (a == 0) {
    cout << 0 << " " << 1 << endl;
    return 0;
  }

  if (b == 0) {
    cout << 1 << " " << 0 << endl;
    return 0;
  }

  double y = 1.0 / pow(1.0 + pow(a/b, 2), 0.5);
  double x = a / b * y;

  cout << setprecision(10) << x << " ";
  cout << setprecision(10) << y << endl;

  return 0;
}