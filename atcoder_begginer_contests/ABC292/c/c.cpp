#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> divisor_cnt(n, 0);

  for (long long i = 1; i < n; ++i) {
    long long cnt = 0;
    for (long long j = 1; j * j <= i; ++j) {
      if (i % j == 0) {
        ++cnt;
        if (j * j != i) ++cnt;
      }
    }
    divisor_cnt[i] = cnt;
  }

  long long ans = 0;
  for (long long i = 1; i < n; ++i) {
    ans = ans + (divisor_cnt[i] * divisor_cnt[n - i]);
  }

  cout << ans << endl;

  return 0;
}