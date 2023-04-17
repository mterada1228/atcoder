#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;

    if (s == "and") {
      cout << "Yes" << endl;
      return 0;
    }

    if (s == "not") {
      cout << "Yes" << endl;
      return 0;
    }

    if (s == "that") {
      cout << "Yes" << endl;
      return 0;
    }

    if (s == "the") {
      cout << "Yes" << endl;
      return 0;
    }

    if (s == "you") {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}