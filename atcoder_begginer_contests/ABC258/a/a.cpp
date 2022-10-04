#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;

  cout << 21 + k / 60 << ":";
  
  if (k % 60 < 10) {
    cout << "0" << k % 60 << endl;
  } else {
    cout << k % 60 << endl;
  }

  return 0;
}