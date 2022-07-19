#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;

  // N の素因数のセットを作成
  long n = N;
  set<long long> p_n;
  for (long long i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      p_n.insert(i);
      n /= i;
    }
  }
  if (n != 1) p_n.insert(n);

  int cnt = 0;
  for (auto p: p_n) {
    for (long long e = 1; e < 100; ++e) {
      long long z = pow(p, e);
      if (N % z == 0) {
        ++cnt;
        N /= z;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}