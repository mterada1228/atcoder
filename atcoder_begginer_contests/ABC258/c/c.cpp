#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  long long sum = 0;

  for (int i = 0; i < q; ++i) {
    long long t, x;

    cin >> t >> x;

    if (t == 1) {
      sum += x;
    } else {
      if (x - 1 - (sum % n) >= 0) {
        cout << s[x - 1 - (sum % n)] << endl;
      } else {
        cout << s[n + (x - 1 - (sum % n))] << endl;
      }
    }
  } 

  return 0;
}