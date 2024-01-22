#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, s, k;
  cin >> n >> s >> k;

  long long ans = 0;

  for (int i = 0; i < n; ++i) {
    long long p, q;
    cin >> p >> q;

    ans = ans + p * q;
  }

  if (ans >= s) {
    cout << ans << endl;
  } else {
    cout << ans + k << endl;
  }

  return 0;
}