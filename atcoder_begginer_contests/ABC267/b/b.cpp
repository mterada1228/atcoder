#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<vector<char>> pins(7);

  pins[0] = { s[7-1] };
  pins[1] = { s[4-1] };
  pins[2] = { s[2-1], s[8-1] };
  pins[3] = { s[1-1], s[5-1] };
  pins[4] = { s[3-1], s[9-1] };
  pins[5] = { s[6-1] };
  pins[6] = { s[10-1] };

  if (s[0] == '1') {
    cout << "No" << endl;
    return 0;
  }

  vector<bool> pinExistLine(7);
  for (int i = 0; i < 7; ++i) {
    bool check = false;
    for (auto e: pins[i]) {
      if (e == '1') {
        check = true;
      }
    }
    pinExistLine[i] = check;
  }

  for (int i = 0; i < 7; ++i) {

    if (pinExistLine[i] == false) continue;

    if (pinExistLine[i+1] == true) continue;

    for (int j = i + 2; j < 7; ++j) {
      if (pinExistLine[j] == true) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}