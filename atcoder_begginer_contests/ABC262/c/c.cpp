#include <bits/stdc++.h>
using namespace std;

long long nCr(long long n, long long r) {
  long long top = 1;
  long long bottom = 1;

  for (long long i = n - r + 1; i <= n; ++i) {
    top *= i;
  }

  for (long long i = 1; i <= r; ++i) {
    bottom *= i;
  }

  return top / bottom;
}

int main() {
  long long n;
  cin >> n;

  vector<long long> A(n + 1, 0);

  long long match = 0;

  for (long long i = 1; i <= n; ++i) {
    long long a;
    cin >> a;

    if (i == a) {
      ++match;
    }

    A[i] = a;
  }

  long long reverse_match = 0;

  for (long long i = 1; i <= n; ++i) {
    if (i != A[i] && i == A[A[i]]) {
      ++reverse_match;
    }
  }

  cout << nCr(match, 2) + reverse_match / 2 << endl;

  return 0;
}