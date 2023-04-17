#include <bits/stdc++.h>
using namespace std;

int main() {
  string xy;
  cin >> xy;

  string x;
  char y;

  for (int i = 0; i < xy.size(); ++i) {
    if (i == xy.size() - 1) {
      y = xy[i];
    } else {
      if (xy[i] != '.') {
        x.push_back(xy[i]);
      }
    }
  }

  int y_int = y - '0';

  if ( 0 <= y_int && y_int <= 2 ) {
    cout << x << '-' << endl;
  } else if ( 3 <= y_int && y_int <= 6 ) {
    cout << x << endl;
  } else {
    cout << x << '+' << endl;
  }

  return 0;
}