#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> s;

  int c;
  for (int i = 0; i < 3; ++i) {
    cin >> c;
    s.insert(c);
  }

  cout << s.size() << endl;

  return 0;
}