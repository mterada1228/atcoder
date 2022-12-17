#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s.size() < 8) {
    cout << "No" << endl;
    return 0;
  }

  if (s[0] < 'A' || s[0] > 'Z') {
    cout << "No" << endl;
    return 0;
  }

  if (s[s.size() - 1] < 'A' || s[s.size() - 1] > 'Z') {
    cout << "No" << endl;
    return 0;
  }

  s.pop_back();
  s.erase(s.begin());

  for (auto e: s) {
    if (e < '0' || e > '9') {
      cout << "No" << endl;
      return 0;
    } 
  }

  int num = atoi(s.c_str());

  if (num < 100000 || num > 999999) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}