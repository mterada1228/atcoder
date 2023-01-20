#include <bits/stdc++.h>
using namespace std;

long long min_l(long long a, long long b) {
  if (a > b) {
    return b;
  } else {
    return a;
  }
}

bool compare(long long x, long long y) {
  return x > y;
}

int main() {
  long long n, k, x;
  cin >> n >> k >> x;

  vector<long long> A;

  for (int i = 0; i < n; ++i) {
    long long a;
    cin >> a;

    A.push_back(a);
  }

  long long res = k;

  for (int i = 0; i < n; ++i) {
    if (res <= 0) break;

    long long cnt = min_l(res, (A[i]/x));

    A[i] = A[i] - cnt * x;

    res = res - cnt;
  }

  sort(A.begin(), A.end(), compare);

  for (int i = 0; i < n; ++i) {
    if (res <= 0) break;

    A[i] = 0;
    res--;
  }

  long long sum = 0;
  for (auto e: A) {
    sum += e;
  }

  cout << sum << endl;

  return 0;
}