#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  vector<int> C, R, inds;

  for (int i = 0; i < n; ++i) {
    int c;
    cin >> c;
    C.push_back(c);
  }

  for (int i = 0; i < n; ++i) {
    int r;
    cin >> r;
    R.push_back(r);
  }

  for (int i = 0; i < n; ++i) {
    if (C[i] == t) {
      inds.push_back(i);
    }
  }

  if (inds.size() == 0) {
    for (int i = 0; i < n; ++i) {
      if (C[0] == C[i]) {
        inds.push_back(i);
      }
    }
  }

  int max = 0;
  int winner;
  for (auto e: inds) {
    if (max <= R[e]) {
      max = R[e];
      winner = e;
    }
  }

  cout << winner + 1 << endl;
  
  return 0;
}