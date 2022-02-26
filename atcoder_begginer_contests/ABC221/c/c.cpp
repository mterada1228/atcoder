#include <bits/stdc++.h>
using namespace std;

string N;

int main() {
  cin >> N;

  sort(N.begin(), N.end());

  int ans = 0;
  do {
    for (int i = 1; i < N.length(); ++i) {
      int a = stoi(N.substr(0, i));
      int b = stoi(N.substr(i, N.length()));
      ans = max(ans, a * b);
    }
  } while(next_permutation(N.begin(), N.end()));

  cout << ans << endl;

  return 0;
}