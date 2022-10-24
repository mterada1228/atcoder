#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x, k;

  cin >> x >> k;

  for (int i = 0; i < k; ++i) {
    long long tmp_x = x;
    long long tmp = 0;
    for (int j = 0; j <= i + 1; ++j) {
      tmp = tmp + (tmp_x % 10) * pow(10, j);
      tmp_x /= 10;
    }

    long long min = abs(0 - tmp);
    long long min_ind = 0;

    for (int j = 1; j <= 9; ++j) {
      if (abs(pow(10, i+1) * j - tmp) <= min) {
        min_ind = j;
        min = abs(pow(10, i+1) * j - tmp);
      }
    }

    x = x - tmp;
    x = x + pow(10, i+1) * min_ind;
  }

  cout << x << endl;

  return 0;
}