#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> arr(9, vector<int>(9));

  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      int a;
      cin >> a;
      arr[i][j] = a;
    }
  }

  // 行チェック
  for (int i = 0; i < 9; ++i) {
    set<int> tmp;

    for (int j = 0; j < 9; ++j) {
      tmp.insert(arr[i][j]);
    }

    if (tmp.size() != 9) {
      cout << "No" << endl;
      return 0;
    }
  }

  // 列チェック
  for (int j = 0; j < 9; ++j) {
    set<int> tmp;

    for (int i = 0; i < 9; ++i) {
      tmp.insert(arr[i][j]);
    }

    if (tmp.size() != 9) {
      cout << "No" << endl;
      return 0;
    }
  }

  // 3 x 3 チェック
  vector<vector<int>> arr_i = { { 0, 1, 2 }, { 3, 4, 5 }, { 6, 7, 8 } };
  vector<vector<int>> arr_j = { { 0, 1, 2 }, { 3, 4, 5 }, { 6, 7, 8 } };

  for (auto e: arr_i) {
    for (auto f: arr_j) {
      set<int> tmp;

      for (auto g: e) {
        for (auto h: f) {
          tmp.insert(arr[g][h]);
        }
      }

      if (tmp.size() != 9) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  
  cout << "Yes" << endl;

  return 0;
}