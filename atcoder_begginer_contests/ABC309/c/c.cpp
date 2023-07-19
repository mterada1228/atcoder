#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  long long sum = 0;
  map<long long, long long> mp;

  for (int i = 0; i < n; ++i) {
    long long a, b;
    cin >> a >> b;

    sum += b;
    mp[a] += b;
  }

  if (sum <= k) {
    cout << 1 << endl;
    return 0;
  }

  for (auto e: mp) {
    sum -= e.second;

    if (sum <= k) {
      cout << e.first + 1 << endl;
      return 0;
    }
  }

  return 0;
}