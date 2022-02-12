#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

string S;
int N;

int main() {
  cin >> S;

  N = S.length();

  long long ans = 0;

  for (int bit = 0; bit < (1 << (N - 1)); ++bit) {
    long long sm = 0;
    long long a = S[0] - '0';

    for (int j = 0; j < N - 1; ++j) {
      if (bit & (1 << j)) {
        sm += a;
        a = 0;
      }
      a = a * 10 + S[j + 1] - '0';
    }

    sm += a;
    ans += sm;
  }

  cout << ans << endl;

  return 0;
}