#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, X;
bool flg;
vector<vector<int>> ab;

void dfs(int n, int x) {
  if (x > X) return;

  if (n == N - 1) {
    if (x == X) {
      flg = true;
      return;
    }
  } else {
    dfs(n + 1, x + ab[n + 1][0]);
    dfs(n + 1, x + ab[n + 1][1]);
  }
}

int main() {
  cin >> N >> X;
  ab.resize(N);
  for(int i = 0; i < N; i++){
    ab[i].resize(2);
  }

  for (int i = 0; i < N; ++i) cin >> ab[i][0] >> ab[i][1];

  flg = false;

  dfs(0, ab[0][0]);
  dfs(0, ab[0][1]);

  if (flg) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}