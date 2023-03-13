#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> T(n + 1);
  vector<vector<int>> map(n + 1);

  for (int i = 1; i <= n; ++i) {
    cin >> T[i];

    int k;
    cin >> k;

    for (int j = 0; j < k; ++j) {
      int a;
      cin >> a;

      map[i].push_back(a);
    }
  }

  set<int> skills;
  vector<bool> seen(n+1, false);
  queue<int> todo;

  for (auto e: map[n]) {
    todo.push(e);
    skills.insert(e);
  }

  while(!todo.empty()) {
    int cur = todo.front();
    todo.pop();

    for (auto f: map[cur]) {
      if (seen[f]) continue;

      todo.push(f);
      skills.insert(f);
      seen[f] = true;
    }
  }

  skills.insert(n);

  long long cnt = 0;
  for (auto e: skills) {
    cnt += T[e];
  }

  cout << cnt << endl;

  return 0;
}