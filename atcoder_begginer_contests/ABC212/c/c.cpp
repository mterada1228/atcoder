#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> A;
  vector<int> B;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  for (int i = 0; i < m; ++i) {
    int b;
    cin >> b;
    B.push_back(b);
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  int min = 1000000001;

  for (int i = 0; i < n; ++i) {
    int key = A[i];

    auto lower_idx = lower_bound(B.begin(), B.end(), key);
    int lower_val = *lower_idx;

    int diff = abs(A[i] - lower_val); 

    if (min >= diff) min = diff;

    --lower_idx;

    if (lower_idx != B.begin() - 1) {
      int lower_m1_val = *lower_idx;
      diff = abs(A[i] - lower_m1_val);

      if (min >= diff) min = diff;
    }
  }

  cout << min << endl;

  return 0;
}