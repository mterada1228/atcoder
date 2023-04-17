#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<char> ans;

  while (n > 0) {
    if (n % 2 == 0) {
      ans.push_back('B');
      n /= 2;
    } else {
      ans.push_back('A');
      n -= 1;
    }
  }

  for (int i = ans.size() - 1; i >= 0; --i) {
    cout << ans[i];
  }
  cout << endl;

  return 0;
}