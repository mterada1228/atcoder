#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  priority_queue<
    int,
    vector<int>
  > que;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    que.push(a);
  }

  for (int i = 0; i < m; ++i) {
    int m_e = que.top();
    que.pop();

    m_e = floor((double) m_e / (double) 2);

    que.push(m_e);
  }

  long long sum = 0;
  while (!que.empty()) {
    sum += que.top();
    que.pop();
  }

  cout << sum << endl;

  return 0;
}