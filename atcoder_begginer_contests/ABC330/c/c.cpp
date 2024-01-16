#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

int main() {
  long long d;
  cin >> d;

  long long min = d;

  for (long long x = 0; x * x <= d; ++x) {
    long long c = x * x - d;

    if (c >= 0) {
      chmin(min, abs(c)); 
    } else {
      long long y = sqrt((-1) * c);

      chmin(min, abs(y * y + c));
      chmin(min, abs((y + 1) * (y + 1) + c));
    }
  }
  
  cout << min << endl;

  return 0;
}