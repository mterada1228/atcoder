#include <bits/stdc++.h>
using namespace std;

int main() {
  priority_queue<long long> less_que;

  priority_queue<
    long long,
    vector<long long>,
    greater<long long>
  > greater_que;

  int q;
  cin >> q;

  for (int i = 0; i < q; ++i) {
    int type;
    cin >> type;
    if (type == 1) {
      long long x;
      cin >> x;
      less_que.push(x);
      greater_que.push(x);
    } else if (type == 2) {
      long long x;
      int k;
      cin >> x >> k;

      priority_queue<long long> copy_less_que = less_que;
      int cnt = 0;
      while(!copy_less_que.empty()) {
        long long top = copy_less_que.top();
        if (top <= x) ++cnt;
        if (cnt == k) {
          cout << top << endl;
          break;
        }
        copy_less_que.pop();
      }
      if (copy_less_que.empty()) cout << -1 << endl;
    } else if (type == 3) {
      long long x;
      int k;
      cin >> x >> k;

      priority_queue<
        long long,
        vector<long long>,
        greater<long long>
      > copy_greater_que = greater_que;

      int cnt = 0;
      while(!copy_greater_que.empty()) {
        long long top = copy_greater_que.top();
        if (top >= x) ++cnt;
        if (cnt == k) {
          cout << top << endl;
          break;
        }
        copy_greater_que.pop();
      }
      if (copy_greater_que.empty()) cout << -1 << endl;
    }
  }

  return 0;
}