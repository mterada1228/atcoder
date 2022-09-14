#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  vector<int> P(n);

  for (int i = 0; i < n; ++i) {
    int p;
    cin >> p;

    P[p] = i; // 料理 p が i の前にあることを表す配列
  }

  vector<int> C(n);

  for (int i = 0; i < n; ++i) {
    C[(i - 1 - P[i] + n) % n] += 1;
    C[(i - P[i] + n) % n] += 1;
    C[(i + 1 - P[i] + n) % n] += 1; 
  }

  int max_n = 0;
  for (int i = 0; i < n; ++i) {
    if (max_n < C[i]) max_n = C[i];
  }

  cout << max_n << endl;

  return 0;
}