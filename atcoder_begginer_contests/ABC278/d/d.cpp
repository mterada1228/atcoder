#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> A;
  vector<int> B(n, 0);

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  int q;
  cin >> q;

  int c;
  int cnt = 0;

  int iq;
  long long xq;

  vector<long long> ans;

  for (int i = 0; i < q; ++i) {
    int type;
    cin >> type;

    if (type == 1) {
      cin >> xq;

      ++cnt;
      c = xq;
    }

    if (type == 2) {
      cin >> iq >> xq;

      if (B[iq - 1] == cnt) {
        A[iq - 1] += xq;
      } else {
        A[iq - 1] = c + xq;
        B[iq - 1] = cnt;
      }
    }

    if (type == 3) {
      cin >> iq;

      if (B[iq - 1] == cnt) {
        ans.push_back(A[iq - 1]);
      } else {
        ans.push_back(c);
      }
    }
  }

  for (auto e: ans) {
    cout << e << endl;
  }

  return 0;
}