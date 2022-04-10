#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, K;
  cin >> N >> K;

  vector<vector<long long>> A(N, vector<long long>(2));

  for (int i = 0; i < N; ++i) cin >> A[i][0] >> A[i][1];

  sort(A.begin(), A.end());

  long long tot = K;

  for (int i = 0; i < N; ++i) {
    if (A[i][0] <= tot) {
      tot += A[i][1];
    } else {
      break;
    }
  }

  cout << tot << endl;

  return 0;
}
