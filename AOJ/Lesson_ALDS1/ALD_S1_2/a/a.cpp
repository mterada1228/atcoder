#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  vector<int> A;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  int cnt = 0;
  bool flg = true;

  while (flg) {
    flg = false;
    for (int i = n - 1; i > 0; --i) {
      if (A[i] < A[i - 1]) {
        swap(A[i], A[i - 1]);
        ++cnt;
        flg = true;
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    if (i != n - 1) cout << A[i] << " ";
    else cout << A[i];
  }
  cout << endl;

  cout << cnt << endl;

  return 0;
}