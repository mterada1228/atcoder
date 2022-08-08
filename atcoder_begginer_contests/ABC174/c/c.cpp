#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;

  vector<int> A(k + 1);

  A[1] = 7 % k;

  if (A[1] == 0) {
    cout << 1 << endl;
    return 0;
  }

  // 鳩の巣理論
  for (int i = 2; i <= k; ++i) {
    A[i] = (A[i - 1] * 10 + 7) % k;

    if (A[i] == 0) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}