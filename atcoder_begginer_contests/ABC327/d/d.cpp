#include <bits/stdc++.h>
using namespace std;

bool flg = true;
map<int, vector<int>> mp;
vector<int> seen;

void dfs(int j, int k) {
  seen[j] = k;

  for (auto e: mp[j]) {
    if (seen[e] == -1) {
      dfs(e, 1 - k);
    } else {
      if (seen[j] == seen[e]) {
        flg = false;
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  seen.resize(n + 1, -1);

  vector<int> A;
  vector<int> B;

  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  for (int i = 0; i < m; ++i) {
    int b;
    cin >> b;
    B.push_back(b);
  }

  for (int i = 0; i < m; ++i) {
    mp[A[i]].push_back(B[i]);
    mp[B[i]].push_back(A[i]);
  }

  for (int i = 1; i <= n; ++i) {
    if (seen[i] == -1) {
      dfs(i, 0);
    }
  }

  if (flg) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}