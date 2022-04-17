#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, k;
  cin >> a >> b >> k;

  int n = 0;
  while (pow(k, n) < b / a) {
    ++n;
  }

  cout << n << endl;
}
