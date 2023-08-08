#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
  return a.second < b.second;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> A;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back({ i, a });
  }

  sort(A.begin(), A.end(), compare);

  cout << A[A.size() - 2].first + 1 << endl;

  return 0;
}