#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> A, vector<int> B) {
  return A[0] < B[0];
}

int main() {
  int n;
  cin >> n;

  map<int, vector<vector<int>>> mp;

  vector<int> X, Y;

  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;

    X.push_back(x);
    Y.push_back(y);
  }

  string S;
  cin >> S;

  for (int i = 0; i < n; ++i) {
    if (S[i] == 'L') {
      mp[Y[i]].push_back({ X[i], 0 });
    } else {
      mp[Y[i]].push_back({ X[i], 1 });
    }
  }

  for (auto e: mp) {
    vector<vector<int>> vec = e.second;

    sort(vec.begin(), vec.end(), compare);

    int exist_r = 0;

    for (auto f: vec) {
      if (f[1] == 0 && exist_r == 1) {
        cout << "Yes" << endl;
        return 0;
      }

      if (f[1] == 1) {
        exist_r = 1;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}