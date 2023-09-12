#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> arr;

  for (int i = 1; i <= 9; ++i) {
    if (n % i == 0) {
      arr.push_back({ i, n / i });
    }
  }

  for (int i = 0; i <= n; ++i) {
    int tmp = 10;

    for (int j = 0; j < arr.size(); ++j) {
      if (i % arr[j].second == 0) {
        tmp = min(tmp, arr[j].first);
      }
    }

    if (tmp == 10) {
      cout << '-';
    } else {
      cout << tmp;
    }
  }
  
  cout << endl;

  return 0;
}