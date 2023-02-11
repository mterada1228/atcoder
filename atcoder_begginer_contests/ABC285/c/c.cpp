#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  reverse(s.begin(), s.end());

  long long ans = 0;
  long long a = 1;

  for (long long i = 0; i < s.size(); ++i) {
    ans = ans + a * ((long long) (s[i] - 'A') + 1);  
    a *= 26;
  }

  cout << ans << endl;

  return 0;
}