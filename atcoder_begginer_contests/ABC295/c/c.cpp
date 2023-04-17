#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, long long> socks;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    ++socks[a];
  }

  long long cnt = 0;

  for (auto e: socks) {
    cnt = cnt + (e.second / 2);
  }

  cout << cnt << endl;

  return 0;
}