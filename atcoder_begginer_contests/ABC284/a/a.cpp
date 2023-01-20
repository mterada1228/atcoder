#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  vector<string> S;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.push_back(s);
  } 

  reverse(S.begin(), S.end());

  for (auto e: S) {
    cout << e << endl;
  }

  return 0;
}