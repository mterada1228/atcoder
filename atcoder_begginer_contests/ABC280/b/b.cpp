#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> S;
  for (int i = 0; i < n; ++i) {
    long long s;
    cin >> s;
    S.push_back(s);
  }

  vector<long long> A(n);
  A[0] = S[0];

  for (int i = 1; i < n; ++i) {
    A[i] = S[i] - S[i - 1];
  }

  for (auto e: A) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}