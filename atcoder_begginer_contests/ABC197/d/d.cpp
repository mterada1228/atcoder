#include <bits/stdc++.h>
using namespace std;

int main() {
  double n, x0, y0, xn2, yn2;
  cin >> n >> x0 >> y0 >> xn2 >> yn2;

  double cx = (x0 + xn2) / 2.0;
  double cy = (y0 + yn2) / 2.0;

  double deg = 360.0 / n;
  double rad = deg * (M_PI / 180.0); 

  double x = cos(rad) * (x0 - cx) - sin(rad) * (y0 - cy) + cx;
  double y = sin(rad) * (x0 - cx) + cos(rad) * (y0 - cy) + cy;

  cout << setprecision(10) << x << " ";
  cout << setprecision(10) << y << endl;

  return 0;
}