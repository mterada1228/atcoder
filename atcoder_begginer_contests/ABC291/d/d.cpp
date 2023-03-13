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
  long long n;
  cin >> n;

  vector<vector<long long>> AB;

  for (int i = 0; i < n; ++i) {
    long long a, b;
    cin >> a >> b;

    AB.push_back({ a, b });
  }

  vector<vector<mint>> dp(n, vector<mint>(2, mint(0)));

  dp[0] = { mint(1), mint(1) };

  for (int i = 1; i < n; ++i) {
    for (int j = 0; j <= 1; ++j) {
      for (int k = 0; k <= 1; ++k) {
        if (AB[i - 1][j] != AB[i][k]) {
          dp[i][k] += dp[i-1][j];
        }
      }
    }
  }

  cout << dp[n-1][0] + dp[n-1][1] << endl;

  return 0;
}