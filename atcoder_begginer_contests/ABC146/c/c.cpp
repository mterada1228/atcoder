#include <bits/stdc++.h>
using namespace std;

long long INF = 1000000001;

bool check(long long x, long long m) {
  if (x >= m) {
    return true;
  } else {
    return false;
  }
}

int digits(long long m) {
  int dig = 1;
  while (m / 10 >= 1) {
    ++dig;
    m /= 10;
  }
  return dig;
}

int main() {
  long long a, b, x;
  cin >> a >> b >> x;

  long long right = INF;
  long long left = 0;

  while (right - left > 1) {
    long long mid = (right + left) / 2;
    long long ans = a * mid + b * digits(mid); 

    if (check(x, ans)) {
      left = mid;
    } else {
      right = mid;
    }
  }

  cout << left << endl;

  return 0;
}