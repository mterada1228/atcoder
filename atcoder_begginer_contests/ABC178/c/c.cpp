#include <bits/stdc++.h>
using namespace std;

long long val = 1000000000 + 7;

int main() {
  long long N;
  cin >> N;

  long long v1 = 1;
  long long v2 = 1;
  long long v3 = 1;
  long long v4 = 1;
  for (int i = 1; i <= N; ++i) {
    v1 = (v1 * 10) % val;
    v2 = (v2 * 9) % val;
    v3 = (v3 * 9) % val;
    v4 = (v4 * 8) % val;
  }

  long long ans = v1 - (v2 + v3 - v4);
  ans %= val;

  cout << (ans + val) % val << endl;
}