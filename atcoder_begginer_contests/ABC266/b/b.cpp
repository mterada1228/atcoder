#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  long long x = n;

  if (n < 0) {
    while (x < 0) {
      x += 998244353;
    }
    cout << x << endl;
    return 0;
  } else {
    while (x >= 998244353) {
      x -= 998244353;
    }
    cout << x << endl;
  }

  return 0;
}