#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x, k;
  cin >> x >> k;

  long long a = 1;

  for (int i = 0; i < k; ++i) {
    x /= a;

    if (x % 10 >= 5) {
      x = (x + (10 - x % 10)) * a;
    } else {
      x = (x - x % 10) * a;
    }

    a *= 10;
  }

  cout << x << endl;

  return 0;
}