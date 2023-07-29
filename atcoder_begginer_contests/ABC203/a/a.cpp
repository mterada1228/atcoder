#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> abc(3);
  cin >> abc[0] >> abc[1] >> abc[2];

  if (abc[0] == abc[1]) {
    cout << abc[2] << endl;
  } else if (abc[0] == abc[2]) {
    cout << abc[1] << endl;
  } else if (abc[1] == abc[2]) {
    cout << abc[0] << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}