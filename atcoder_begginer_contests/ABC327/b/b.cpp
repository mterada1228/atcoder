#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long b;
  cin >> b;

  for (unsigned long long a = 1; a < 17; ++a) {
    unsigned long long tmp = 1;
    
    for (unsigned long long j = 0; j < a; ++j) {
      tmp *= a;
    }

    if (tmp == b) {
      cout << a << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}