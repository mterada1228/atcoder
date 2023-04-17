#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  queue<int> un_called;
  priority_queue<
    int,
    vector<int>,
    greater<int>
  > called;
  vector<bool> receipted(n + 1, false);

  for (int i = 1; i <= n; ++i) {
    un_called.push(i);
  }

  for (int i = 0; i < q; ++i) {
    int type;
    cin >> type;

    if (type == 1) {
      int tmp = un_called.front();
      un_called.pop();
      called.push(tmp);
    } else if (type == 2) {
      int num;
      cin >> num;
      receipted[num] = true;
    } else {
      int tmp = called.top();
      called.pop();
      while (receipted[tmp]) {
        tmp = called.top();
        called.pop();
      }
      called.push(tmp);
      cout << tmp << endl;
    }
  }

  return 0;
}