#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

long long N;
long long ans;
long long res;

void DFS(long long i, long long res, long long n) {
  if (res > N) {
    res = 1;
    return;
  }

  if (n == 2) {
    if (res <= N) ++ans;
    res = 1;
    return;
  }

  for (long long j = i; j <= N; ++j) {
    DFS(j, res * j, n + 1);
  }
}

int main() {
  cin >> N;

  ans = 0;

  for (long long i = 1; i <= N; ++i) {
    res = i;
    DFS(i, res, 0);
  }

  cout << ans << endl;

  return 0;
}
