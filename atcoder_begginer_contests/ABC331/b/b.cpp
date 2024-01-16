#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

int main() {
  long long N, S, M, L;
  cin >> N >> S >> M >> L;

  long long ans = 1LL << 60;

  for (long long s = 0; s <= N; ++s) {
    for (long long m = 0; m <= N; ++m) {
      for (long long l = 0; l <= N; ++l) {
        if (6 * s + 8 * m + 12 * l >= N) {
          chmin(ans, s * S + m * M + l * L);
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}