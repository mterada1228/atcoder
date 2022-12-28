#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

long long lcm(long long a, long long b) {
  long long d = gcd(a, b);
  return a / d * b;
}

int main() {
  long long n, a, b;
  cin >> n >> a >> b;

  long long s_tot = n * (n + 1) / 2;

  long long n_a = n / a;
  long long s_a = n_a * (n_a + 1) / 2 * a;

  long long n_b = n / b;
  long long s_b = n_b * (n_b + 1) / 2 * b;

  long long lcm_ab = lcm(a, b);
  long long n_lcm_ab = n / lcm_ab;
  long long s_lcm_ab = n_lcm_ab * (n_lcm_ab + 1) / 2 * lcm_ab;

  cout << s_tot - s_a - s_b + s_lcm_ab << endl;

  return 0;
}