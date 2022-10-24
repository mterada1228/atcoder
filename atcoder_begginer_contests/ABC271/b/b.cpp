#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<vector<int>> arr;

  for (int i = 0; i < n; ++i) {
    int l;
    cin >> l;

    vector<int> tmp;

    for (int j = 0; j < l; ++j) {
      int a;
      cin >> a;

      tmp.push_back(a);
    }

    arr.push_back(tmp);
  }

  for (int i = 0; i < q; ++i) {
    int s, t;
    cin >> s >> t;

    cout << arr[s-1][t-1] << endl;
  }

  return 0;
}