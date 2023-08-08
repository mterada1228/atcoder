#include <bits/stdc++.h>
using namespace std;

long long INF = 1000000001;

bool check(long long n, long long m) {
  if (n < m) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> A, B;
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

  long long right = INF;
  long long left = 0;

  while (right - left > 1) {
    long long mid = (right + left) / 2;

    // 売り手の数
    auto iter_upper = upper_bound(A.begin(), A.end(), mid);
    long long n_cnt = distance(A.begin(), iter_upper);

    // 買い手の数
    auto iter_lower = lower_bound(B.begin(), B.end(), mid);
    long long m_cnt = B.size() - distance(B.begin(), iter_lower);

    if (check(n_cnt, m_cnt)) {
      left = mid;
    } else {
      right = mid;
    }
  }

  cout << right << endl;

  return 0;
}