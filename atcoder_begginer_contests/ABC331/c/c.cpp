#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> A;

  for (int i = 0; i < n; ++i) {
    long long a;
    cin >> a;
    A.push_back(a);
  }

  vector<long long> A_s = A;

  sort(A_s.begin(), A_s.end());

  vector<long long> S(n + 1, 0);

  for (int i = 1; i <= n; ++i) {
    S[i] = S[i - 1] + A_s[i - 1];
  }

  for (int i = 0; i < n; ++i) {
    long long a_i = A[i];

    auto it = upper_bound(A_s.begin(), A_s.end(), a_i);
    size_t pos = distance(A_s.begin(), it);

    cout << S[n] - S[pos] << " ";
  }

  cout << endl;

  return 0;
}