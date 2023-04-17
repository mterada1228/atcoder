#include <bits/stdc++.h>
using namespace std;

vector<string> arr = { "ABC", "ARC", "AGC", "AHC" };

int main() {
  vector<string> inputs(3);
  for (int i = 0; i < 3; ++i) {
    cin >> inputs[i]; 
  }

  for (auto e: arr) {
    bool exist = false;
    for (auto f: inputs) {
      if (e == f) exist = true;
    }

    if (!exist) {
      cout << e << endl;
    }
  }

  return 0;
}