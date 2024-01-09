#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  char cur = s[0];

  map<char, int> mp;
  int cnt = 0;

  for (int i = 0; i < n; ++i) {
    if (cur == s[i]) {
      ++cnt;
    } else {
      if (mp[cur] < cnt) mp[cur] = cnt;
      cur = s[i];
      cnt = 1;
    }
  }

  if (mp[cur] < cnt) mp[cur] = cnt;
  
  int ans = 0;
  for (auto e: mp) {
    ans += e.second;
  }

  cout << ans << endl;

  return 0;
}