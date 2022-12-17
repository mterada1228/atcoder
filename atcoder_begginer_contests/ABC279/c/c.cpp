#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  map<string, int> S;
  map<string, int> T;

  vector<string> vec_s(h);

  for (int i = 0; i < h; ++i) {
    string c;
    cin >> c;
    vec_s[i] = c;
  }

  for (int i = 0; i < w; ++i) {
    string tmp = "";
    for (int j = 0; j < h; ++j) {
      tmp.push_back(vec_s[j][i]);
    }
    ++S[tmp];
  }

  vector<string> vec_t(h);

  for (int i = 0; i < h; ++i) {
    string c;
    cin >> c;
    vec_t[i] = c;
  }

  for (int i = 0; i < w; ++i) {
    string tmp = "";
    for (int j = 0; j < h; ++j) {
      tmp.push_back(vec_t[j][i]);
    }
    ++T[tmp];
  }

  for (auto e: T) {
    if (e.second != S[e.first]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}