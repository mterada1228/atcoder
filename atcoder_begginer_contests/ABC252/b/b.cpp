#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;

  cin >> n >> k;

  vector<int> A(n);
  vector<int> B(k);

  for (int i = 0; i < n; ++i) cin >> A[i];
  for (int i = 0; i < k; ++i) cin >> B[i];

  int max = *max_element(A.begin(), A.end());

  for (int i = 0; i < n; ++i) {
    if (A[i] == max) {
      for (int j = 0; j < k; ++j) {
        if ((i + 1) == B[j]) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;

  return 0;
}