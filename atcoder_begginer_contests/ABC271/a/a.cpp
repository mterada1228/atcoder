#include <bits/stdc++.h>
using namespace std;

string tenToHex(int n) {
  string ans;

  if (n == 0) return "0";

  while (n > 0) {
    int r = n % 16;

    if (r >= 0 && r <= 9) {
      ans.push_back('0' + r);
    } else {
      ans.push_back('A' + r - 10);
    }

    n = n / 16;
  }

  reverse(ans.begin(), ans.end());

  return ans;
}

int main() {
  int n;
  cin >> n;

  string ans = tenToHex(n);

  if (ans.size() < 2) {
    cout << "0" << ans << endl;
    return 0;
  } else {
    cout << ans << endl;
  }

  return 0;
}