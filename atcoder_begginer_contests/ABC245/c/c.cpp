#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

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

  set<int> x_i;
  x_i.insert(A[0]);
  x_i.insert(B[0]);

  for (int i = 0; i < n - 1; ++i) {
    set<int> x_ip1;

    for (auto e: x_i) {
      if (abs(e - A[i+1]) <= k) x_ip1.insert(A[i+1]);
      if (abs(e - B[i+1]) <= k) x_ip1.insert(B[i+1]);
    }

    if (x_ip1.size() == 0) {
      cout << "No" << endl;
      return 0;
    }

    x_i = x_ip1;
  }

  cout << "Yes" << endl;

  return 0;
}