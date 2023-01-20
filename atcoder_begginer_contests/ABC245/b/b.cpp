#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(2002, 0);

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    A[a] = 1;
  }

  for (int i = 0; i <= 2001; ++i) {
    if (A[i] == 0) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}