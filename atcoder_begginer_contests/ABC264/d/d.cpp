#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> arr;

  for (auto e: s) {
    if (e == 'a') {
      arr.push_back(1);
    } else if (e == 't') {
      arr.push_back(2);
    } else if (e == 'c') {
      arr.push_back(3);
    } else if (e == 'o') {
      arr.push_back(4);
    } else if (e == 'd') {
      arr.push_back(5);
    } else if (e == 'e') {
      arr.push_back(6);
    } else {
      arr.push_back(7);
    }
  }

  int cnt = 0;
  for (int i = 0; i < arr.size() - 1; ++i) {
    for (int j = arr.size() - 1; j > i; --j) {
      if (arr[j - 1] > arr[j]) {
        swap(arr[j-1], arr[j]);
        ++cnt;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}