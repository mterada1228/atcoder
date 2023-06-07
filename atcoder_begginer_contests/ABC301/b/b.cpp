#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A;

  int a;
  cin >> a;
  A.push_back(a);

  for (int i = 1; i < n; ++i) {
    int a;
    cin >> a;

    if (a - A[A.size() - 1] > 1) {
      for (int j = A[A.size() - 1] + 1; j <= a - 1; ++j) {
        A.push_back(j);
      }
    } else if (A[A.size() - 1] - a > 1) {
      for (int j = A[A.size() - 1] - 1; j >= a + 1; --j) {
        A.push_back(j);
      }
    }

    A.push_back(a);
  }

  for (auto e: A) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}