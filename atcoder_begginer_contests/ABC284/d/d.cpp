#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    long long N;
    cin >> N;

    long long A;
    for (long long j = 2; j * j * j <= N; ++j) {
      if (N % j == 0) {
        A = j;
        break;
      }
    }

    long long p, q;
    if (N % (A * A) == 0) {
      p = A;
      q = N / A / A;
    } else {
      p = sqrt(N / A);
      q = A;
    }

    cout << p << " " << q << endl;
  }

  return 0;
}