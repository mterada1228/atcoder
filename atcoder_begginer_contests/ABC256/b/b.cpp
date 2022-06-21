#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) cin >> A[i];

  vector<int> hex;

  for (int i = 0; i < N; ++i) {
    hex.push_back(0);
    for (int j = 0; j < hex.size(); ++j) {
      hex[j] += A[i];
    }
  }

  int p = 0;
  for (auto e: hex) {
    if (e > 3) ++p;
  }

  cout << p << endl;

  return 0;
}