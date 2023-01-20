#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

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

  int x = 0;
  int y = 0;

  map<int, int> cnt;

  for (int i = 0; i < n; ++i) {
    if (A[i] == B[i]) ++y;

    ++cnt[A[i]];
    ++cnt[B[i]];
  }

  for (auto e: cnt) {
    if (e.second == 2) ++x;
  }

  cout << y << endl;
  cout << x - y << endl;

  return 0;
}