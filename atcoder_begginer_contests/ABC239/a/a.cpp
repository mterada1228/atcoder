#include <bits/stdc++.h>
using namespace std;

int main() {
  double h;
  cin >> h;

  double ans = pow((h * (12800000 + h)), 0.5);

  cout << setprecision(10) << ans << endl;

  return 0;
}