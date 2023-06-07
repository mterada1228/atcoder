#include <bits/stdc++.h>
using namespace std;

int h, w;

vector<vector<char>> shift_h(vector<vector<char>> arr) {
  for (int j = 0; j < w; ++j) {
    vector<char> tmp(h);

    for (int i = 0; i < h; ++i) {
      tmp[i] = arr[(i + 1) % h][j];
    }

    for (int k = 0; k < h; ++k) {
      arr[k][j] = tmp[k];
    }
  }
  return arr;
}

vector<vector<char>> shift_w(vector<vector<char>> arr) {
  for (int i = 0; i < h; ++i) {
    vector<char> tmp(w);

    for (int j = 0; j < w; ++j) {
      tmp[j] = arr[i][(j + 1) % w];
    }

    arr[i] = tmp;
  }
  return arr;
}

int main() {
  cin >> h >> w;

  vector<vector<char>> A(h, vector<char>(w));
  vector<vector<char>> B(h, vector<char>(w));

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> B[i][j];
    }
  }

  for (int i = 0; i < h; ++i) {
    A = shift_h(A);

    for (int j = 0; j < w; ++j) {
      A = shift_w(A);

      if (A == B) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}
