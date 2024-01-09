#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> D;
  for (int i = 0; i < n; ++i) {
    int d;
    cin >> d;
    D.push_back(d);
  }

  int sum = 0;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= D[i - 1]; ++j) {
      string tmp = to_string(i) + to_string(j);

      bool flg = true;
      for (int k = 0; k < tmp.size() - 1; ++k) {
        if (tmp[k] != tmp[k + 1]) flg = false;
      }

      if (flg) {
        ++sum;
      }
    }
  }

  cout << sum << endl;

  return 0;
}