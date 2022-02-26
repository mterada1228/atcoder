#include <bits/stdc++.h>
using namespace std;

string s, t;

int main() {
  cin >> s >> t;

  if (s == t) { 
    cout << "Yes" << endl;
    return 0;
  }

  for (int i = 0; i < s.length() - 1; ++i) {
    string s_copy = s;
    char tmp;
    tmp = s_copy[i];
    s_copy[i] = s_copy[i + 1];
    s_copy[i + 1] = tmp;

    if (s_copy == t) { 
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}