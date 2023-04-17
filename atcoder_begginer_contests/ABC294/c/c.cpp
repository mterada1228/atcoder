#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> A(n);
  vector<int> B(m);

  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }

  for (int i = 0; i < m; ++i) {
    cin >> B[i];
  }

  int cur_A = 0;
  int cur_B = 0;

  int sort_num = 1;
  vector<int> ans_A, ans_B;

  while (cur_A < A.size() && cur_B < B.size()) {
    if (A[cur_A] < B[cur_B]) {
      cur_A++;
      ans_A.push_back(sort_num);
      sort_num++;
    } else {
      cur_B++;
      ans_B.push_back(sort_num);
      sort_num++;
    }
  }

  if (cur_A >= A.size()) {
    for (int i = cur_B; i < B.size(); ++i) {
      ans_B.push_back(sort_num);
      sort_num++;
    }
  } else {
    for (int i = cur_A; i < A.size(); ++i) {
      ans_A.push_back(sort_num);
      sort_num++;
    }
  }

  for (auto e: ans_A) {
    cout << e << " ";
  }
  cout << endl;

  for (auto e: ans_B) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}