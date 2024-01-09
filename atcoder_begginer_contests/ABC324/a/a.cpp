#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  bool flg = true;

  for (int i = 0; i < n - 1; ++i) {
    if (A[i] != A[i + 1]) flg = false;
  }

  if (flg) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}