#include <bits/stdc++.h>
using namespace std;

bool compare(int x, int y) {
  return x > y;
}

int main() {
  int n;
  cin >> n;

  vector<int> A;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  sort(A.begin(), A.end(), compare);

  int max_v = A[0];

  for (auto e: A) {
    if (e != max_v) {
      cout << e << endl;
      return 0;
    }
  }

  return 0;
}