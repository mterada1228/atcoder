#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> A[i];
  }

  int q;
  cin >> q;

  for (int i = 0; i < q; ++i) {
    int t;
    cin >> t;

    if (t == 1) {
      int k, x;
      cin >> k >> x;

      A[k] = x;
    } else {
      int k;
      cin >> k;

      cout << A[k] << endl;
    }
  }

  return 0;
}