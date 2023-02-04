#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;

  deque<int> A;

  A.push_back(n);

  for (int i = n - 1; i >= 0; --i) {
    if (s[i] == 'R') {
      A.push_front(i);
    } else {
      A.push_back(i);
    }
  }

  for (auto e: A) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}