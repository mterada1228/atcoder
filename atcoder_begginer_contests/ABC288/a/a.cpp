#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> A;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  for (int i = 0; i < k; ++i) {
    A.erase(A.begin());
    A.push_back(0);
  }

  for (auto e: A) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}