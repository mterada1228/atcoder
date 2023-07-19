#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> x, vector<int> y) {
  return x[1] < y[1];
}

int main() {
  int n;
  cin >> n;

  vector<int> cnt(n + 1, 0);
  vector<vector<int>> arr;

  for (int i = 0; i < 3 * n; ++i) {
    int a;
    cin >> a;

    if (cnt[a] < 1) {
      ++cnt[a];
    } else if (cnt[a] == 1) {
      ++cnt[a];
      arr.push_back({ a, i });
    }
  }

  sort(arr.begin(), arr.end(), compare);

  for (auto e: arr) {
    cout << e[0] << " ";
  }
  cout << endl;
  
  return 0;
}