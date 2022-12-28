#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> A(n);
  vector<int> pos(n);

  for (int i = 0; i < n; ++i) {
    A[i] = i;
    pos[i] = i;
  }

  for (int i = 0; i < q; ++i) {
    int x;
    cin >> x;

    int p0 = pos[x - 1];

    int p1;
    if (p0 == n - 1) {
      p1 = p0 - 1;
    } else {
      p1 = p0 + 1;
    }

    int v0 = A[p0];
    int v1 = A[p1];

    swap(A[p0], A[p1]);
    swap(pos[v0], pos[v1]);
  }

  for (auto e: A) {
    cout << e + 1 << " ";
  }
  cout << endl;

  return 0;
}