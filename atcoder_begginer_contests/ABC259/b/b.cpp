#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, d;
  cin >> a >> b >> d;

  double rad = d * M_PI / 180.;

  double x = a * cos(rad) - b * sin(rad);
  double y = a * sin(rad) + b * cos(rad);

  cout << setprecision(10) << x << " ";
  cout << setprecision(10) << y << endl;

  return 0;
}