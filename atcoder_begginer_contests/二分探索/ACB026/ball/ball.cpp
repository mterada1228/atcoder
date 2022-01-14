#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int A, B, C;
const double pi = acos(-1.0);

bool check(double X) {
  // f(X) が 100 以上の場合は true
  if ( (A * X + B * sin(C * X * pi)) <= 100 ) return true;
  return false;
}

int main() {
  cin >> A >> B >> C;

  // 二分探索
  double left = 0;
  double right = 200;
  while (right - left > 1e-6 ) {
    double mid = (left + right) / 2;
    if (check(mid)) left = mid;
    else right = mid;
  }

  // 小数点第 15 位まで出力
  cout << fixed << setprecision(15) << left << endl;
}