#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> x, vector<int> y) {
  if (x[1] == y[1]) {
    return x[0] < y[0]; 
  } else {
    return x[1] < y[1];
  }
}

int main() {
  int n;
  vector<int> C;
  vector<vector<int>> A;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    int c;
    cin >> c;
    C.push_back(c);

    vector<int> tmp;

    for (int j = 0; j < c; ++j) {
      int a;
      cin >> a;
      tmp.push_back(a);
    }

    A.push_back(tmp);
  }

  int x;
  cin >> x;
  
  vector<vector<int>> hits;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < A[i].size(); ++j) {
      if (A[i][j] == x) {
        hits.push_back({ i, C[i] });
      }
    }
  }

  sort(hits.begin(), hits.end(), compare);

  if (hits.size() == 0) {
    cout << 0 << endl;
  } else {
    int min = hits[0][1];

    vector<int> ans;

    for (auto e: hits) {
      if (e[1] == min) ans.push_back(e[0]);
    }

    cout << ans.size() << endl;

    for (auto e: ans) {
      cout << e + 1 << " ";
    }
  }

  cout << endl;

  return 0;
}