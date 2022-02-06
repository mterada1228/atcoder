#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

// mod m における、a の逆元を求める
// a / b (mod m) ≡ a * modinv(b, a % m) % m
long long modinv(long long a, long long m) {
  long long b = m, u = 1, v = 0;
  while (b) {
      long long t = a / b;
      a -= t * b; swap(a, b);
      u -= t * v; swap(u, v);
  }
  u %= m; 
  if (u < 0) u += m;
  return u;
}

long long N;

int main() {
  cin >> N;

  long long ans = 0;
  int cnt = 0;
  long long N_origin = N;

  N /= 10;

  while (N > 0) {
    long long k = 9 * pow(10, cnt);

    // k * (k + 1) / 2 (mod 998244353)
    k %= 998244353;
    long long tmp = k;
    tmp *= (k + 1);
    tmp %= 998244353;
    tmp *= modinv(2, 998244353); // 1/2 するのは、2 の mod M における逆元を掛けるのと同じ
    tmp %= 998244353;

    ans += tmp;
    ans %= 998244353;
    
    ++cnt;
    N /= 10;
  }

  long long k = N_origin - pow(10, cnt) + 1;

  // k * (k + 1) / 2 (mod 998244353)
  k %= 998244353;
  long long tmp = k;
  tmp *= (k + 1);
  tmp %= 998244353;
  tmp *= modinv(2, 998244353);
  tmp %= 998244353;

  ans += tmp;
  ans %= 998244353;

  cout << ans << endl;

  return 0;
}