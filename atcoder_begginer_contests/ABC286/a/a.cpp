#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;

  vector<int> A(n+1);
  A[0] = 0;

  for (int i = 1; i <= n; ++i) {
    cin >> A[i];
  }

  for (int i = 1; i < p; ++i) {
    cout << A[i] << " ";
  }

  for (int i = p; i <= q; ++i) {
    cout << A[r+i-p] << " ";
  }

  for (int i = q + 1; i < r; ++i) {
    cout << A[i] << " ";
  }

  for (int i = r; i <= s; ++i) {
    cout << A[p+i-r] << " ";
  }

  for (int i = s + 1; i <= n; ++i) {
    cout << A[i] << " ";
  }

  cout << endl;

  return 0;
}