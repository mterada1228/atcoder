#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

long N, A, B, P, Q, R, S;

int main() {

  cin >> N >> A >> B >> P >> Q >> R >> S;

  for (long long i = P; i <= Q; ++i) {
    for (long long j = R; j <= S; ++j) {
      if ((i - j) == (A - B)) cout << '#';
      else if ((i + j) == (A + B)) cout << '#';
      else cout << '.';
    }
    cout << endl;
  }

  return 0;
}