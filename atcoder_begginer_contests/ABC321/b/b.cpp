#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> A;

  for (int i = 0; i < n - 1; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  for (int i = 0; i <= 100; ++i) {
    vector<int> tmp_A = A;
    tmp_A.push_back(i);

    sort(tmp_A.begin(), tmp_A.end());

    int sum = 0;
    for (int j = 1; j < n - 1; ++j) {
      sum += tmp_A[j];
    }

    if (sum >= x) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}