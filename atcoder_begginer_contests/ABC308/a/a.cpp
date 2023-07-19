#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> S;

  for (int i = 0; i < 8; ++i) {
    int s;
    cin >> s;
    S.push_back(s);
  }

  for (int i = 0; i < 7; ++i) {
    if (S[i] > S[i + 1]) {
      cout << "No" << endl;
      return 0;
    }
  }

  for (int i = 0; i < 8; ++i) {
    if (S[i] < 100 || S[i] > 675 || S[i] % 25 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}