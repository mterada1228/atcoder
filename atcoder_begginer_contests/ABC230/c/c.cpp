#include <bits/stdc++.h>
using namespace std;

long long max_l(long long a, long long b) {
  if (a >= b) {
    return a;
  } else {
    return b;
  }
}

long long min_l(long long a, long long b) {
  if (a <= b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  long long n, a, b;
  long long p, q, r, s;

  cin >> n >> a >> b;
  cin >> p >> q >> r >> s;

  vector<vector<char>> arr(q - p + 1, vector<char>(s - r + 1, '.'));

  for (long long k = max_l(p - a, r - b); k <= min_l(s - b, q - a); ++k) {
    arr[a + k - p][b + k - r] = '#';
  }
  
  for (long long k = max_l(p - a, b - s); k <= min_l(b - r, q - a); ++k) {
    arr[a + k - p][b - k - r] = '#';
  }

  for (long long i = 0; i < q - p + 1; ++i) {
    for (long long j = 0; j < s - r + 1; ++j) {
      cout << arr[i][j];
    }
    cout << endl;
  }

  return 0;
}