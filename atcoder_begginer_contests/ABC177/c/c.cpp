#include <bits/stdc++.h>
using namespace std;

long long val = 1000000007;

int main() {
  int N;

  cin >> N;

  vector<long long> A(N);
  vector<long long> S(N + 1);

  for (int i = 0; i < N; ++i) cin >> A[i];

  S[0] = 0;

  for (int i = 1; i <= N; ++i) {
    S[i] = (S[i - 1] + A[i - 1]);
  }

  long long sum = 0;

  for (int i = 0; i < N; ++i) {
    long long x = A[i] * ((S[N] - S[i + 1]) % val);
    sum = (sum + x) % val;
  }

  cout << sum << endl;

  return 0;
}
