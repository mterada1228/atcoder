#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A, B;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  for (int i = 0; i < n; ++i) {
    int b;
    cin >> b;
    B.push_back(b);
  }

  int cnt = 0;

  for (int i = 1; i <= 1000; ++i) {
    bool flg = true;

    for (int j = 0; j < n; ++j) {
      if (i < A[j]) flg = false;
      if (B[j] < i) flg = false;
    }

    if (flg) ++cnt;
  }

  cout << cnt << endl;

  return 0;
}