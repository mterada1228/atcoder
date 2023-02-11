#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<vector<int>> A(k);

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A[i % k].push_back(a);
  }

  for (int i = 0; i < A.size(); ++i) {
    sort(A[i].begin(), A[i].end());
  }

  vector<int> sorted_arr(n);
  for (int i = 0; i < n; ++i) {
    sorted_arr[i] = A[i % k][i / k];
  }

  for (int i = 0; i < n - 1; ++i) {
    if (sorted_arr[i] > sorted_arr[i + 1]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}