#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, K, A;

int main() {
  cin >> N >> K >> A;

  int cur = A;
  int next;

  while (K > 1) {
    --K;

    if (cur == N) {
      cur = 1;
    } else {
      ++cur;
    }
  }

  cout << cur << endl;

  return 0;
}