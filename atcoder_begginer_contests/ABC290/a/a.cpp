#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> A, B;

  A.push_back(0);

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  for (int i = 0; i < m; ++i) {
    int b;
    cin >> b;
    B.push_back(b);
  }

  int sum = 0;
  for (auto e: B) {
    sum += A[e];
  }

  cout << sum << endl;

  return 0;
}