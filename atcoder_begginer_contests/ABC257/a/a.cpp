#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  string s = "";
  for (char i = 'A'; i <= 'Z'; ++i) {
    for (int j = 0; j < n; ++j) {
      s.push_back(i);
    }
  }

  cout << s[x-1] << endl;

  return 0;
}