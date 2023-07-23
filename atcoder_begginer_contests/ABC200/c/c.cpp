#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> A(200, 0);
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    ++A[a%200];
  }

  long long ans = 0;
  for (int i = 0; i < 200; ++i) {
    ans = ans + ( A[i] * (A[i] - 1) / 2 );
  }

  cout << ans << endl;

  return 0;
}