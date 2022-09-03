#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s == "Monday") {
    cout << 5 << endl;
    return 0;
  } else if (s == "Tuesday") {
    cout << 4 << endl;
    return 0;
  } else if (s == "Wednesday") {
    cout << 3 << endl;
    return 0;
  } else if (s == "Thursday") {
    cout << 2 << endl;
    return 0;
  } else {
    cout << 1 << endl;
    return 0;
  }

  return 0;
}