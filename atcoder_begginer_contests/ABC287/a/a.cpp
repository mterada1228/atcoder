#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt_for = 0;
  int cnt_ageinst = 0;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;

    if (s == "For") {
      ++cnt_for;
    } else {
      ++cnt_ageinst;
    }
  }

  if (cnt_for > cnt_ageinst) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}