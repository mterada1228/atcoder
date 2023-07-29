#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  n = (n * 1.08) / 1;

  if (n > 206) {
    cout << ":(" << endl;
  } else if (n == 206) {
    cout << "so-so " << endl;
  } else {
    cout << "Yay!" << endl;
  }

  return 0;
}