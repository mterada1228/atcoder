#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<string> codes;

  for (int i = 0; i < n; ++i) {
    string code;
    cin >> code;

    codes.insert(code);
  }

  if (codes.size() != n) {
    cout << "No" << endl;
    return 0;
  }

  for (auto code: codes) {
    if (
      code[0] != 'H' &&
      code[0] != 'D' &&
      code[0] != 'C' &&
      code[0] != 'S'
    ) {
      cout << "No" << endl;
      return 0;
    }

    if (
      code[1] != 'A' &&
      code[1] != '2' && 
      code[1] != '3' &&
      code[1] != '4' &&
      code[1] != '5' && 
      code[1] != '6' &&
      code[1] != '7' &&
      code[1] != '8' &&
      code[1] != '9' && 
      code[1] != 'T' &&
      code[1] != 'J' &&
      code[1] != 'Q' &&
      code[1] != 'K'
    ) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}