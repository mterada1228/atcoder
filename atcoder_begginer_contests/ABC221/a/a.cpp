#include <bits/stdc++.h>
using namespace std;

long long a, b;

int main() {
  cin >> a >> b;

  long long ans = pow(32, a - b);
  cout << ans << endl;

  return 0;
}