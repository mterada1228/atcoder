#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<long long> A(200000 + 1);

  for (int r = 0; r < n; ++r) {
    long long a;
    cin >> a;

    ++A[a];
  }

  long long ans = 0;

  for (int r = 1; r <= 200000; ++r) {
    for (int q = 1; q * r <= 200000; ++q) {
      ans += A[r] * A[q] * A[q * r];
    }
  }

  cout << ans << endl;

  return 0;
}