#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 0;

  for (int i = 1; i <= 7 * n; ++i) {
    int a;
    cin >> a;

    if (i % 7 == 0) {
      ans += a;
      cout << ans << " ";
      ans = 0;
    } else {
      ans += a;
    }
  }

  cout << endl;

  return 0;
}