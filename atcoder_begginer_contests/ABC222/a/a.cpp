#include <bits/stdc++.h>
using namespace std;

string N;

int main() {
  cin >> N;

  if (N.length() == 4) cout << N << endl;
  else if (N.length() == 3) cout << "0" + N << endl;
  else if (N.length() == 2) cout << "00" + N << endl;
  else if (N.length() == 1) cout << "000" + N << endl;

  return 0;
}