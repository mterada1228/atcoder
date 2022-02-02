#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

long long N, X, cnt;
vector<vector<long long>> A;

void dfs(long long n, long long t) {
  if (n == N) {
    if (t == X) ++cnt;
    return;
  } else {
    for (auto e: A[n]) {
      dfs(n + 1, t * e);
    }
  }

}

int main() {
  cin >> N >> X;
  A.resize(N);

  for (int i = 0; i < N; ++i) {
    long long L;
    cin >> L;
    A[i].resize(L);
    for (int j = 0; j < L; ++j) cin >> A[i][j];
  }

  cnt = 0;

  dfs(0, 1);

  cout << cnt << endl;

  return 0;
}