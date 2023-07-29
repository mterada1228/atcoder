#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(n);
  vector<vector<int>> answer;

  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }

  answer.push_back(A);

  for (int i = 1; i < n; ++i) {
    int v = A[i];
    int j = i - 1;

    while (j >= 0 && A[j] > v) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;

    answer.push_back(A);
  }

  for (auto e: answer) {
    for (int i = 0; i < n; ++i) {
      if (i == n - 1) {
        cout << e[i];
      } else {
        cout << e[i] << " ";
      }
    }
    cout << endl;
  }
}
