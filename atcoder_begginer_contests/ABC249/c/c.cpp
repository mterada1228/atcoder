#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<string> S(n);

  for (int i = 0; i < n; ++i) cin >> S[i];

  int max = 0;

  for (int bit = 0; bit < (1<<n); ++bit) {
    string s = "";

    for (int i = 0; i < n; ++i) {
      if (bit & (1<<i)) {
        s += S[i];
      }
    }

    map<char, int> mp;

    for (int k = 0; k < s.length(); ++k) {
      ++mp[s[k]];
    }

    int cnt = 0;

    for (auto iter = mp.begin(); iter != mp.end(); ++iter) {
      if (iter->second == k) ++cnt;
    }

    if (cnt > max) max = cnt;
  }

  cout << max << endl;

  return 0;
}