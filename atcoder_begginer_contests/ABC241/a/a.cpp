#include <bits/stdc++.h>
using namespace std;


int main() {
  vector<int> a(10);
  for (int i = 0; i < 10; ++i) cin >> a[i];

  int index = a[0];
  index = a[index];
  cout << a[index] << endl;

  return 0;
}