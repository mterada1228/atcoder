#include <bits/stdc++.h>
using namespace std;

long long mod = 1000000007;

// modint
class mint {
  long long x;
public:
  mint(long long x=0) : x((x%mod+mod)%mod) {}
  mint operator-() const { 
    return mint(-x);
  }
  mint& operator+=(const mint& a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint& a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const  mint& a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint& a) const {
    mint res(*this);
    return res+=a;
  }
  mint operator-(const mint& a) const {
    mint res(*this);
    return res-=a;
  }
  mint operator*(const mint& a) const {
    mint res(*this);
    return res*=a;
  }
  mint pow(long long t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const {
    return pow(mod-2);
  }
  mint& operator/=(const mint& a) {
    return (*this) *= a.inv();
  }
  mint operator/(const mint& a) const {
    mint res(*this);
    return res/=a;
  }

  friend ostream& operator<<(ostream& os, const mint& m){
    os << m.x;
    return os;
  }
};

int main() {
  long long n, a, b;
  cin >> n >> a >> b;

  // ans = 2^n - 1 - nCa - nCb
  // 2^n - 1 部分の計算
  mint ans = mint(2).pow(n) - 1;

  // - nCa の部分の計算
  mint nCa = 1;

  for (int j = n - a + 1; j <= n; ++j) {
    nCa *= j;
  }

  for (int i = 1; i <= a; ++i) {
    nCa /= i;
  }

  // - nCb の部分の計算

  mint nCb = 1;

  for (int j = n - b + 1; j <= n; ++j) {
    nCb *= j;
  }

  for (int i = 1; i <= b; ++i) {
    nCb /= i;
  }

  ans -= nCa;
  ans -= nCb;

  cout << ans << endl;

  return 0;
}
