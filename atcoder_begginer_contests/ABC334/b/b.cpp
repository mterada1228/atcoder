#include <bits/stdc++.h>
using namespace std;

long long floor(long long x, long long m) {
  // x / m の床関数（最小の整数を返す）
  long long r = (x % m + m) % m; 
  return (x - r) / m;
}

int main() {
  long long A, M, L, R;
  cin >> A >> M >> L >> R;

  long long L_d = L - A;
  long long R_d = R - A;

  cout << floor(R_d, M) - floor(L_d - 1, M) << endl;

  return 0;
}