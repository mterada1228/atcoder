#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

int Q;
long long N = pow(2, 20);

int main() {
  cin >> Q;

  vector<vector<long long>> tx(Q, vector<long long>(2, 0));
  vector<long long> A(N, -1);
  map<long long, int> mp;

  for (int i = 0; i < Q; ++i) cin >> tx[i][0] >> tx[i][1];

  for (int i = 0; i < Q; ++i) {
    if (tx[i][0] == 1) {
      long long h = tx[i][1];
      while (mp[h % N] > 0) {
        ++mp[h % N];
        ++h;
      }
      A[h % N] = tx[i][1];
      ++mp[h % N];
    } else {
      cout << A[tx[i][1] % N] << endl;
    }
  }

  return 0;
}