#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long c;

  cin >> n >> c;

  vector<int> T(n);
  vector<long long> A(n);

  for (int i = 0; i < n; ++i) {
    cin >> T[i] >> A[i]; 
  }

  vector<long long> X(n);

  int op = T[0];

  vector<long long> Y(n);

  for (int i = 0; i < n; ++i) {
    if (i == 0) {
      if (T[0] == 1) {
        long long tmp;
        tmp = c & A[0];
        cout << tmp << endl;
        X[0] = tmp; 
      } else if (T[0] == 2) {
        long long tmp;
        tmp = c | A[0];
        cout << tmp << endl;
        X[0] = tmp;
      } else {
        long long tmp;
        tmp = c ^ A[0];
        cout << tmp << endl;
        X[0] = tmp;
      }
      Y[0] = A[0];
    } else {
      if (T[i] == 1) {
        Y[i] = Y[i - 1] & A[i];
      } else if (T[i] == 2) {
        Y[i] = Y[i - 1] | A[i];
      } else {
        Y[i] = Y[i - 1] ^ A[i];
      }

      long long tmp;
      if (op == 1) {
        tmp = X[i - 1] & Y[i];
      } else if (op == 2) {
        tmp = X[i - 1] | Y[i];
      } else {
        tmp = X[i - 1] ^ Y[i];
      }

      cout << tmp << endl;
      X[i] = tmp;
    }
  }

  cout << "debug ----" << endl;
  // for (auto e: X) {
  //   cout << e << endl;
  // }

  cout << "9 xor 7" << endl;
  cout << (9 xor 7) << endl;

  cout << "10 xor 3 xor 3 or 5" << endl;
  cout << (10 xor 3 xor 3 | 5) << endl;

  return 0;
}