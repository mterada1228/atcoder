#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, x;
  cin >> n >> x;

  set<long long> A;
  vector<long long> A_xj;

  for (int i = 0; i < n; ++i) {
    long long a;
    cin >> a;

    A.insert(a);
    A_xj.push_back(x + a);
  }

  for (auto e: A_xj) {
    if (A.find(e) != A.end()) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}