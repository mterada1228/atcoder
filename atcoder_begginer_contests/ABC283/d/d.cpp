#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<char> rem;
  map<char, int> box;

  for (auto e: s) {
    if ('a' <= e && e <= 'z') {
      if (box[e] == 1) {
        cout << "No" << endl;
        return 0;
      } else {
        box[e] = 1;
        rem.push_back(e);
      }
    } else if (e == ')') {
      for (auto f: rem) {
        box[f] = 0;
      }
      rem = {};
    }
  }

  cout << "Yes" << endl;

  return 0;
}