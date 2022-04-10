#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> S;

  vector<int> a = { 1 };

  S.push_back(a);

  for (int i = 1; i <= N; ++i) {
    vector<int> tmp = S[i-1];
    tmp.push_back(i + 1);
    for (auto e: S[i-1]) {
      tmp.push_back(e);
    }
    S.push_back(tmp);
  }

  for (auto e: S[N-1]) {
    cout << e << " ";
  }

  cout << endl;

  return 0;
}