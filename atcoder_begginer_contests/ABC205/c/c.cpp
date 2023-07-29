#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;

  if (a == b) {
    cout << "=" << endl;
    return 0;
  }

  if (a >= 0 && b >= 0) {
    if (a > b) {
      cout << ">" << endl;
      return 0;
    } else {
      cout << "<" << endl;
      return 0;
    }
  }

  if (a < 0 && b < 0) {
    if (a < b) {
      cout << ">" << endl;
      return 0;
    } else {
      cout << "<" << endl;
      return 0;
    }
  }

  if (a < 0 && b >= 0) {
    if (c % 2 != 0) {
      cout << "<" << endl;
      return 0;
    } else {
      if (abs(a) > abs(b)) {
        cout << ">" << endl;
        return 0;
      } else if (abs(a) == abs(b)) {
        cout << "=" << endl;
        return 0;
      } else {
        cout << "<" << endl;
        return 0;
      }
    }
  }

  if (a >= 0 && b < 0) {
    if (c % 2 != 0) {
      cout << ">" << endl;
      return 0;
    } else {
      if (abs(a) > abs(b)) {
        cout << ">" << endl;
        return 0;
      } else if (abs(a) == abs(b)) {
        cout << "=" << endl;
        return 0;
      } else {
        cout << "<" << endl;
        return 0;
      }
    }
  }

  return 0;
}