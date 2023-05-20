#include <bits/stdc++.h>
using namespace std;

int l;

int main() {
  int n;
  cin >> n >> l;

  vector<string> S;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;

    S.push_back(s);
  }

  sort(S.begin(), S.end());

  for (auto e: S) {
    cout << e;
  }
  cout << endl;

  return 0;
}