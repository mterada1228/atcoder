#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> A(N);

  for (int i = 0; i < N; ++i) cin >> A[i];

  long long max = 0;

  for (int i = 0; i < N; ++i) {
    long long x = A[i];
    for (int j = i; j < N; ++j) {
      if (x > A[j]) x = A[j];

      long long tot = x * (j - i + 1);
      if (max < tot) max = tot;
    }
  }

  cout << max << endl;

  return 0;
}
