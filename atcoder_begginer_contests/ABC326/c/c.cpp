#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> A;
  
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  sort(A.begin(), A.end());

  int max_cnt = 0;

  for (int i = 0; i < n; ++i) {
    auto iter = lower_bound(A.begin(), A.end(), A[i] + m);

    int tmp;

    if (iter != A.end()) {
      tmp = iter - A.begin() - 1 - i + 1; 
    } else {
      tmp = n - 1 - i + 1;
    }

    max_cnt = max(max_cnt, tmp);
  }

  cout << max_cnt << endl;

  return 0;
}