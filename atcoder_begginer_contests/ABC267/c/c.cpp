#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<long long> A(n);

  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }

  vector<long long> S(n+1);
  S[0] = 0;
  for (int i = 0; i <= n; ++i) {
    S[i + 1] = S[i] + A[i];
  }

  long long sum_n = 0;
  for (int i = 0; i < m; ++i) {
    sum_n = sum_n + (i + 1) * A[i];
  }

  long long max = sum_n;

  for (int i = 1; i <= n - m; ++i) {
    sum_n = sum_n - (S[i-1+m] - S[i-1]);
    sum_n += m * A[i-1+m];
    chmax(max, sum_n);
  }

  cout << max << endl;

  return 0;
}