#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string t = "atcoder";

  map<char, int> mp;

  for (int i = 0; i < t.size(); ++i) {
    mp[t[i]] = i;
  }

  vector<int> s_int;

  for (int i = 0; i < s.size(); ++i) {
    s_int.push_back(mp[s[i]]);
  }

  // 転倒数を求める
  int ans = 0;
  for (int i = 0; i < s.size(); ++i) {
    for (int j = i + 1; j < s.size(); ++j) {
      if (s_int[i] > s_int[j]) ++ans;
    }
  }

  cout << ans << endl;

  return 0;
}