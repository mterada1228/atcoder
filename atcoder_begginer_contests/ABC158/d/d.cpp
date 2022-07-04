#include <bits/stdc++.h>
using namespace std;

// なんか間に合っちゃったけど queue でやらないと先頭への追加は TLE になりがちなので注意。

// 末尾に追加: deq.push_back(c);
// 先頭に追加: deq.push_front(c);

int main() {
  string s;
  int Q;

  cin >> s >> Q;

  int flg = 0;

  for (int i = 0; i < Q; ++i) {
    int t;
    cin >> t;

    if (t == 1) {
      if (flg == 0) {
        flg = 1;
      } else {
        flg = 0;
      }
    } else {
      int f;
      char c;
      cin >> f >> c;

      if (flg == 0) {
        if (f == 1) {
          s.insert(s.begin(), c);
        } else {
          s.push_back(c);
        }
      } else {
        if (f == 1) {
          s.push_back(c);
        } else {
          s.insert(s.begin(), c);
        }
      }
    } 
  }

  if (flg == 0) {
    cout << s << endl;
  } else {
    reverse(s.begin(), s.end());
    cout << s << endl;
  }

  return 0;
}