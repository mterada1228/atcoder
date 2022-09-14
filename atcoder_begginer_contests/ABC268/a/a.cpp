#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> set;

  for (int i = 0; i < 5; ++i) {
    int n;
    cin >> n;

    set.insert(n);
  }

  cout << set.size() << endl;

  return 0;
}
