#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> A;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    A.insert(a);
  }

  if (A.size() == n) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}