#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b;

  cin >> a >> b;
  
  // 極値となる n を求める
  double n;
  n = pow(2.0 * b / a, -2.0/3.0) - 1;

  double ans_1;
  double ans_2;

  long long n_ll = n; 
  ans_1 = a / pow((n_ll + 1), 0.5) + n_ll * b;
  
  n_ll = n_ll + 1;
  ans_2 = a / pow((n_ll + 1), 0.5) + n_ll * b;

  cout << setprecision(10) << min(ans_1, ans_2) << endl;

  return 0;
}