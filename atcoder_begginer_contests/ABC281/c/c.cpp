#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, t;
  cin >> n >> t;

  vector<long long> S(n + 1);
  S[0] = 0;
  
  for (int i = 1; i <= n; ++i) {
    long long a;
    cin >> a;

    S[i] = S[i - 1] + a;
  }

  long long res = t % S[n];

  auto target_index = (lower_bound(S.begin(), S.end(), res) - 1 - S.begin());
  long long target = S[target_index];

  cout << target_index + 1  << " " << res - target << endl;

  return 0;
}