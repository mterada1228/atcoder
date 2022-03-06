#include <bits/stdc++.h>
using namespace std;

long long N;
long long cnt;

void dfs(long long x, long long n) {
  if (n == N - 1) {
    ++cnt;
    cnt %= 998244353;
    return;
  } else {
    if (x == 1) {
      dfs(1, n + 1);
      dfs(2, n + 1);
    } else if (x == 9) {
      dfs(8, n + 1);
      dfs(9, n + 1);
    } else {
      dfs(x - 1, n + 1);
      dfs(x, n + 1);
      dfs(x + 1, n + 1);
    } 
  }
}

int main() {
  cin >> N;
  
  cnt = 0;

  for (int i = 1; i <= 9; ++i) {
    dfs(i, 0);
  }

  cout << cnt << endl;

  return 0;
}