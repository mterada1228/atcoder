#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q;
  cin >> n >> p >> q;

  int min_d = 1000000;

  for (int i = 0; i < n; ++i) {
    int d;
    cin >> d;
    min_d = min(min_d, d);
  }

  if (p >= min_d + q) {
    cout << min_d + q << endl;
  } else {
    cout << p << endl;
  }

  return 0;
}