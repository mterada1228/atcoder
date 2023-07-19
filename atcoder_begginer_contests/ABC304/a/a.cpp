#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> S(n);
  vector<int> A(n);

  for (int i = 0; i < n; ++i) {
    cin >> S[i] >> A[i];
  }

  int smallest = 1000000001;
  int smallest_index = -1;

  for (int i = 0; i < n; ++i) {
    if (smallest > A[i]) {
      smallest_index = i;
      smallest = A[i];
    }
  }

  for (int i = smallest_index; i < n; ++i) {
    cout << S[i] << endl;
  }

  for (int i = 0; i < smallest_index; ++i) {
    cout << S[i] << endl;
  }

  return 0;
}