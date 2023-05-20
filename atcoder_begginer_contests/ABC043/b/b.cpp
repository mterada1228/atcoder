#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string output = "";

  for (auto e: s) {
    if (e == '0') {
      output.push_back('0');
    } else if (e == '1') {
      output.push_back('1');
    } else {
      if (output.size() > 0) {
        output.pop_back();
      }
    }
  }

  cout << output << endl;

  return 0;
}