#include <bits/stdc++.h>
using namespace std;

int main() {
  int h1, w1;
  cin >> h1 >> w1;

  vector<vector<int>> A(h1, vector<int>(w1));
  for (int i = 0; i < h1; ++i) {
    for (int j = 0; j < w1; ++j) {
      cin >> A[i][j];
    }
  }

  int h2, w2;
  cin >> h2 >> w2;
  vector<vector<int>> B(h2, vector<int>(w2));
  for (int i = 0; i < h2; ++i) {
    for (int j = 0; j < w2; ++j) {
      cin >> B[i][j];
    }
  }

  for (int bit_h = 0; bit_h < (1<<h1); ++bit_h) {
    for (int bit_w = 0; bit_w < (1<<w1); ++bit_w) {
      vector<vector<int>> trimed_array;

      for (int i = 0; i < h1; ++i) {
        if (bit_h & (1<<i)) {
          vector<int> tmp;

          for (int j = 0; j < w1; ++j) {
            if (bit_w & (1<<j)) {
              tmp.push_back(A[i][j]);
            }
          }

          trimed_array.push_back(tmp);
        }
      }

      if (trimed_array == B) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}