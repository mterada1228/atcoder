#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, x;
  cin >> a >> b >> c >> x;

  if (x <= a) {
    cout << setprecision(10) << 1 << endl;
  } else if ( x <= b) {
    cout << setprecision(10) << c / (b - a) << endl;
  } else {
    cout << setprecision(10) << 0 << endl;
  }

  return 0;
}