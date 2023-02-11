#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> A;
  set<int, greater<int>> A_s;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    ++A[a];
    A_s.insert(a);
  }

  vector<int> K(n, 0);

  int cnt = 0;
  for (auto e: A_s) {
    K[cnt] = A[e];
    ++cnt;
  }

  for (auto e: K) {
    cout << e << endl;
  }

  return 0;
}