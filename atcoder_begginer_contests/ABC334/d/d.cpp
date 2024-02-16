#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, q;
  cin >> n >> q;

  vector<long long> R;

  for (int i = 0; i < n; ++i) {
    long long r;
    cin >> r;
    R.push_back(r);
  }

  sort(R.begin(), R.end());

  vector<long long> S_R(R.size() + 1, 0);

  for (int i = 0; i < n; ++i) {
    S_R[i + 1] = S_R[i] + R[i];
  }

  for (int i = 0; i < q; ++i) {
    long long q_i;
    cin >> q_i;

    auto it = upper_bound(S_R.begin(), S_R.end(), q_i);
    cout << it - S_R.begin() - 1 << endl;
  }

  return 0;
}