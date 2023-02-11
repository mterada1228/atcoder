#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, t;
  cin >> n >> m >> t;

  vector<long long> M(n, 0);
  vector<long long> A(n, 0);

  for (int i = 0; i < n - 1; ++i) {
    cin >> A[i + 1];
  }

  for (int i = 0; i < m; ++i) {
    long long x, y;
    cin >> x >> y;

    M[x - 1] = y;
  }

  for (int i = 0; i < n; ++i) {
    t -= A[i];

    if (t <= 0) {
      cout << "No" << endl;
      return 0;
    }

    t += M[i];
  }

  cout << "Yes" << endl;

  return 0;
}