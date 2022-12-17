#include <bits/stdc++.h>
using namespace std;

int main() {
  long long k;
  cin >> k;

  long long ans = 1;

  for (long long i = 2; i * i <= k; ++i) {
    if (k % i != 0) continue;
    
    long long a = 0;
    while (k % i == 0) {
      k /= i;
      ++a;
    }

    long long n = 0;
    long long x = 0;
    while (a > 0) {
      n += i;
      x = n;
      while (x % i == 0) {
        x /= i;
        --a;
      }
    }
    ans = max(ans, n);
  }

  // 最後に一つ素因数が残る
  ans = max(ans, k);

  cout << ans << endl;

  return 0;
}