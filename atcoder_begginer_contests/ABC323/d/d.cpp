#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<long long, long long> mp;

  for (int i = 0; i < n; ++i) {
    int s, c;
    cin >> s >> c;
    mp[s] += c;
  }

  for (auto e: mp) {
    if (e.second < 2) continue;

    if (e.second % 2 == 0) {
      mp[e.first] = 0;
    } else {
      mp[e.first] = 1;
    } 

    mp[e.first * 2] = mp[e.first * 2] + e.second / 2;
  }

  long long cnt = 0;
  for (auto e: mp) {
    cnt += e.second;
  }

  cout << cnt << endl;

  return 0;
}