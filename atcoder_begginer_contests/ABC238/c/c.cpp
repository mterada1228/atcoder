#include <bits/stdc++.h>
using namespace std;

long long mod = 998244353;

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
  long long N;
  cin >> N;

  int dig = 1;
  long long tmp_n = N;
  while (tmp_n >= 10) {
    tmp_n /= 10;
    ++dig;
  }

  mint sum = mint(0);
  long long ten = 1;

  for (int i = 1; i < dig; ++i) {
    mint n = mint((ten * 10 - 1) - ten + 1);
    sum = sum + (n * (mint(1) + n) / mint(2));
    ten *= 10;
  }

  mint n = mint(N - ten + 1);
  sum = sum + (n * (mint(1) + n) / mint(2));

  cout << sum << endl;

  return 0;
}