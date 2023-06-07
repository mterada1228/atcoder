#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;

  long long cnt = 0;

  while (a != b) {
    if (a >= b) {
      long long k = a/b;
      a = a - k * b;
      cnt += k;
    } else {
      long long k = b/a;
      b = b - k * a;
      cnt += k;
    }

    if (a == 0 || b == 0) break;
  }

  if (a == 0 || b == 0) {
    cout << cnt - 1 << endl;
  } else {
    cout << cnt << endl;
  }

  return 0;
}