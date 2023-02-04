#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  // x1, y1 から sqrt(5) の範囲にある格子点の候補
  vector<pair<int, int>> ans_1;

  for (int i = x1; i >= x1 - pow(5, 2); --i) {
    for (int j = y1; j <= y1 + pow(5, 2); ++j) {
      if (pow((i - x1), 2) + pow((j - y1), 2) == 5) {
        ans_1.push_back({i, j});
      } 
    }

    for (int j = y1; j >= y1 - pow(5, 2); --j) {
      if (pow((i - x1), 2) + pow((j - y1), 2) == 5) {
        ans_1.push_back({i, j});
      } 
    }
  }

  for (int i = x1; i <= x1 + pow(5, 2); ++i) {
    for (int j = y1; j <= y1 + pow(5, 2); ++j) {
      if (pow((i - x1), 2) + pow((j - y1), 2) == 5) {
        ans_1.push_back({i, j});
      } 
    }

    for (int j = y1; j >= y1 - pow(5, 2); --j) {
      if (pow((i - x1), 2) + pow((j - y1), 2) == 5) {
        ans_1.push_back({i, j});
      } 
    }
  }

  // x2, y2 から sqrt(5) の範囲にある格子点の候補
  vector<pair<int, int>> ans_2;

  for (int i = x2; i >= x2 - pow(5, 2); --i) {
    for (int j = y2; j <= y2 + pow(5, 2); ++j) {
      if (pow((i - x2), 2) + pow((j - y2), 2) == 5) {
        ans_2.push_back({i, j});
      } 
    }

    for (int j = y2; j >= y2 - pow(5, 2); --j) {
      if (pow((i - x2), 2) + pow((j - y2), 2) == 5) {
        ans_2.push_back({i, j});
      } 
    }
  }

  for (int i = x2; i <= x2 + pow(5, 2); ++i) {
    for (int j = y2; j <= y2 + pow(5, 2); ++j) {
      if (pow((i - x2), 2) + pow((j - y2), 2) == 5) {
        ans_2.push_back({i, j});
      } 
    }

    for (int j = y2; j >= y2 - pow(5, 2); --j) {
      if (pow((i - x2), 2) + pow((j - y2), 2) == 5) {
        ans_2.push_back({i, j});
      } 
    }
  }

  for (auto e: ans_1) {
    for (auto f: ans_2) {
      if ((e.first == f.first) && (e.second == f.second)) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}