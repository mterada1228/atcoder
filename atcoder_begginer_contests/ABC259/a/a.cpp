#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;

  if (m <= x) {
    cout << t - (x - m) * d << endl;
  } else {
    cout << t << endl;
  }

  return 0;
}