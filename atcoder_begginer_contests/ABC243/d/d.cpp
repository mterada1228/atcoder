#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, x;
  cin >> n >> x;

  string s;
  cin >> s;

  vector<char> vec;

  for (int i = 0; i < n; ++i) {
    if (s[i] == 'U') {
      if (vec.size() > 0) {
        if (vec[vec.size() - 1] == 'L' || vec[vec.size() - 1] == 'R') {
          vec.pop_back();
          continue;
        }
      }
    }

    vec.push_back(s[i]);
  }

  for (auto e: vec) {
    if (e == 'U') x /= 2;
    if (e == 'L') x *= 2;
    if (e == 'R') x = x * 2 + 1;
  }

  cout << x << endl;

  return 0;
}