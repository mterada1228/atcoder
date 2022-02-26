#include <bits/stdc++.h>
using namespace std;

int k;
string a, b;

int main() {
  cin >> k >> a >> b;

  long long a_10 = 0;
  for (int i = 0; i < a.length(); ++i) {
    a_10 += (int)pow(k, i) * (a[a.length() - i - 1] - '0');
  }

  long long b_10 = 0;
  for (int i = 0; i < b.length(); ++i) {
    b_10 += (int)pow(k, i) * (b[b.length() - i - 1] - '0');
  }

  cout << a_10 * b_10 << endl;

  return 0;
}