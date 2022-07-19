#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  int ans = 0;

  for (long long i = 1; i * i <= 2 * n; ++i) {
    if ( (2 * n) % i == 0 ) {
      long long x = i;
      long long y = 2 * n / i;

      if (x % 2 != y % 2) {
        ans += 2;
      }
    }
  }

  cout << ans << endl;

  return 0;
}