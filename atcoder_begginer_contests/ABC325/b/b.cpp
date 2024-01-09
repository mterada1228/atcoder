#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> X;
  vector<long long> W;

  for (int i = 0; i < n; ++i) {
    int w, x;
    cin >> w >> x;

    W.push_back(w);
    X.push_back(x);
  }

  vector<int> C;
  for (int i = 0; i <= 24; ++i) {
    C.push_back(i);
  }

  long long max_w = 0;

  for (auto e: C) {
    long long tmp = 0;

    for (int i = 0; i < n; ++i) {
      if (9 <= (e + X[i]) % 24 && (e + X[i]) % 24 <= 18) {
        if (9 <= (e + 1 + X[i]) % 24 && (e + 1 + X[i]) % 24 <= 18) {
          tmp += W[i];
        }
      }
    }

    if (max_w < tmp) max_w = tmp;
  }

  cout << max_w << endl;

  return 0;
}