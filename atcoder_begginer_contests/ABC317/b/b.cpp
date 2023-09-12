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

  sort(A.begin(), A.end());

  for (int i = 0; i < n - 1; ++i) {
    if (A[i] + 1 != A[i + 1]) {
      cout << A[i] + 1 << endl;
      return 0;
    }
  }

  cout << A[n - 1] + 1 << endl;

  return 0;
}