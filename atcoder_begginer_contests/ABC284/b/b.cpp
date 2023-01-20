#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    int n;
    cin >> n;

    vector<int> A;
    for (int i = 0; i < n; ++i) {
      int a;
      cin >> a;
      A.push_back(a);
    }

    int cnt = 0;
    for (auto e: A) {
      if (e % 2 != 0) ++cnt;
    }

    cout << cnt << endl;
  }

  return 0;
}