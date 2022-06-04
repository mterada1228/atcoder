#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;

  cin >> n >> k;

  vector<int> A;

  for (int i = 2; i <= n; ++i) {
    A.push_back(i);
  }

  vector<vector<long long>> t(n + 1, vector<long long>(n + 1));

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      cin >> t[i][j];
    }
  }

  vector<long long> times;

  do {
    times.push_back(t[1][A[0]]); 
    for (int i = 0; i <= n - 3; ++i) {
      times.back() += t[A[i]][A[i + 1]];
    }
    times.back() += t[A[n - 2]][1];
  } while(next_permutation(A.begin(), A.end()));

  int ans = 0;
  for (auto e: times) {
    if ( e == k ) ++ans;
  }

  cout << ans << endl;

  return 0;
}