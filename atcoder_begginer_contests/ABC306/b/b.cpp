#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long ans = 0;

  for (int i = 0; i < 64; ++i) {
    unsigned long long a;
    cin >> a;

    ans += a << i;
  }

  cout << ans << endl;

  return 0;
}
