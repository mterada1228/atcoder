#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> C;

  long long x = 1;

  for (int i = 0; i < 12; ++i) {
    C.push_back(x);
    x = x * 10 + 1;
  }

  set<long long> C_s;

  for (int i = 0; i < 12; ++i) {
    for (int j = 0; j < 12; ++j) {
      for (int k = 0; k < 12; ++k) {
        C_s.insert(C[i] + C[j] + C[k]);
      }
    }
  }

  int ind = 0;

  for (auto e: C_s) {
    if (ind == n - 1) {
      cout << e << endl;
      return 0;
    }

    ind++;
  }

  return 0;
}