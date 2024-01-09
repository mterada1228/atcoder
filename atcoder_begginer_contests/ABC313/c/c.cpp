#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> A;
  long long sum_a = 0;
  for (int i = 0; i < n; ++i) {
    long long a;
    cin >> a;
    A.push_back(a);
    sum_a += a;
  }

  sort(A.begin(), A.end());

  vector<long long> B(n, sum_a / n);

  for (int i = 0; i < sum_a % n; ++i) {
    B[n - i - 1] = sum_a / n + 1;
  }

  long long ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += abs(A[i] - B[i]);
  }

  cout << ans / 2 << endl;

  return 0;
}