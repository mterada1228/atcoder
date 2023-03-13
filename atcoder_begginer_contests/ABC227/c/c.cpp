#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  long long ans = 0;

  for (long long a = 1; a * a * a <= n; ++a) {
    for (long long b = a; b * b <= n / a; ++b) {
      long long tmp = n / a / b - b + 1; 
      if (tmp > 0) ans = ans + tmp;
    }
  }

  cout << ans << endl;

  return 0;
}