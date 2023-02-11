#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<string> S;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.push_back(s);
  }

  vector<string> top_S;
  for (int i = 0; i < k; ++i) {
    top_S.push_back(S[i]);
  }

  sort(top_S.begin(), top_S.end());

  for (auto e: top_S) {
    cout << e << endl;
  }

  return 0;
}