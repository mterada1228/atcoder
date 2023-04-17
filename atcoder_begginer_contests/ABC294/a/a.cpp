#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }

  for (auto e: A) {
    if (e % 2 == 0) {
      cout << e << " ";
    }
  }

  cout << endl;

  return 0;
}