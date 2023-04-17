#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;

  cin >> s >> k;

  sort(s.begin(), s.end());

  int cnt = 1;

  do {
    if (cnt == k) {
      cout << s << endl;
      return 0;
    } else {
      ++cnt;
    }
  } while (next_permutation(s.begin(), s.end()));

  return 0;
}