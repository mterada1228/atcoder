#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  vector<int> S(n);

  S[0] = 0;

  int sum = 0;

  for (int i = 0; i < s.size() - 1; ++i) {
    if (s[i] == s[i + 1]) {
      ++sum;
    }
    S[i + 1] = sum;
  }

  for (int i = 0; i < q; ++i) {
    int l, r;
    cin >> l >> r;

    cout << S[r - 1] - s[l - 1] << endl;
  }

  return 0;
}