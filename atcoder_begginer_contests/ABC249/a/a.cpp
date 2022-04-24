#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;

  int takahashi = ( x / (a + c) ) * a * b;

  if ( x % (a + c) >= a) {
    takahashi += a * b;
  } else {
    takahashi += (x % (a + c)) * b;
  }

  int aoki = ( x / (d + f) ) * d * e;

  if ( x % (d + f) >= d) {
    aoki += d * e;
  } else {
    aoki += (x % (d + f)) * e;
  }

  if (takahashi > aoki) {
    cout << "Takahashi" << endl;
  } else if (takahashi == aoki) {
    cout << "Draw" << endl;
  } else {
    cout << "Aoki" << endl;
  }

  return 0;
}