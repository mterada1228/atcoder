#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> vec;
  for (int i = 0; i < h; ++i) {
    string s;
    cin >> s;
    vec.push_back(s); 
  }

  int cnt = 0;
  for (auto e: vec) {
    for (auto f: e) {
      if (f == '#') ++cnt;
    }
  }

  cout << cnt << endl;

  return 0;
}