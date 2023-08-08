#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int ans = 0;

  for (int i = 1; i <= 100; ++i) {
    if (a <= i && i <= b) ++ans;
  }

  cout << ans << endl;

  return 0;
}