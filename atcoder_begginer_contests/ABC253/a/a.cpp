#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b , c;
  cin >> a >> b >> c;

  vector<int> arr = { a, b, c }; 
  sort(arr.begin(), arr.end());

  if (arr[1] == b) {
    cout << "Yes" << endl;
    return 0;
  } else {
    cout << "No" << endl;
    return 0;
  }

  return 0;
}