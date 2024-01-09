#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> A(n + 1, 0);

  int cur_k = 0;
  int cur_v = 0;

  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    ++A[a];

    if (cur_v < A[a]) {
      cur_k = a;
      cur_v = A[a];
    } else if (cur_v == A[a]) {
      if (cur_k >= a) {
        cur_k = a;
      }
    }

    cout << cur_k << endl;
  }

  return 0;
}