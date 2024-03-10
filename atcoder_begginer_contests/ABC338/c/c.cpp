#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> Q;
  for (int i = 0; i < n; i++) {
    int q;
    cin >> q;
    Q.push_back(q);
  }

  vector<int> A;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  vector<int> B;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    B.push_back(b);
  }

  int min_q_div_a = 10000000;

  for (int i = 0; i < n; ++i) {
    if (A[i] == 0) continue;

    if (min_q_div_a > Q[i] / A[i]) {
      min_q_div_a = Q[i] / A[i];
    } 
  }

  int max_cnt = 0;

  for (int i = min_q_div_a; i >= 0; --i) {
    vector<int> res(n);

    for (int j = 0; j < n; ++j) {
      res[j] = Q[j] - i * A[j];
    }

    int min_q_div_b = 10000000;
    
    for (int j = 0; j < n; ++j) {
      if (B[j] == 0) continue;

      if (min_q_div_b > res[j] / B[j]) {
        min_q_div_b = res[j] / B[j];
      }
    }

    if (max_cnt < i + min_q_div_b) {
      max_cnt = i + min_q_div_b;
    }
  }

  cout << max_cnt << endl;

  return 0;
}