#include <bits/stdc++.h>
using namespace std;

int main() {
  for (int i = 0; i < 26; ++i) {
    int p;
    cin >> p;

    char p_c = ('a' + (p - 1));

    cout << p_c;
  }

  cout << endl;

  return 0;
}