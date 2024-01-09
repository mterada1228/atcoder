#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  for (int i = 0; i < n.size() - 1; ++i) {
    int a = n[i] - '0';
    int b = n[i + 1] - '0';

    if (a <= b) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}