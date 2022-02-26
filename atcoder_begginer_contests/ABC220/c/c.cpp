#include <bits/stdc++.h>
using namespace std;

long long n, x, sum_a;
vector<long long> a;

int main() {
  cin >> n;
  a.resize(n);
  for (int i = 0; i < n; ++i) cin >> a[i];
  cin >> x;

  sum_a = 0;
  for (int i = 0; i < n; ++i) sum_a += a[i];

  long long p = x / sum_a * a.size();

  long long res = x % sum_a;

  if (res == 0) {
    cout << p + 1 << endl;
    return 0;
  }

  long long sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += a[i];
    if (sum > res) {
      cout << p + i + 1 << endl;
      return 0;
    }
  }

  return 0;
}