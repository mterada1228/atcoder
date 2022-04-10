#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<vector<string>> A(N, vector<string>(2));
  for (int i = 0; i < N; ++i) cin >> A[i][0] >> A[i][1];

  for (int i = 0; i < N; ++i) {
    string check_s = "ok";
    string check_t = "ok";

    for (int j = 0; j < N; ++j) {
      if (i == j) continue;
      if (A[i][0] == A[j][0] || A[i][0] == A[j][1]) {
        check_s = "ng";
      }
    }

    for (int j = 0; j < N; ++j) {
      if (i == j) continue;
      if (A[i][1] == A[j][1] || A[i][1] == A[j][0]) {
        check_t = "ng";
      }
    }

    if (check_s == "ng" && check_t == "ng" ) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}