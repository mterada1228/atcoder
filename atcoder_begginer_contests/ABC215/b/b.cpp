#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  int k = 0;
  long long x = 1;

  while (x <= n) {
    ++k;
    x *= 2;
  }

  cout << k - 1 << endl;

  return 0;
}