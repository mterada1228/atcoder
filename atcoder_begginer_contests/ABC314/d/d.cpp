#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  string s;
  cin >> n >> s >> q;

  int mode = -1;
  int max_2_or_3 = -1;

  vector<pair<char, int>> S;

  for (int i = 0; i < n; ++i) {
    S.push_back({ s[i], 0 });
  }

  for (int i = 0; i < q; ++i) {
    int t, x;
    char a;
    cin >> t >> x >> a;

    if (t == 1) {
      S[x - 1].first = a;
      S[x - 1].second = i + 1;
    }

    if (t == 2) {
      mode = 0;
      max_2_or_3 = i + 1;
    } 

    if (t == 3) {
      mode = 1;
      max_2_or_3 = i + 1;
    }
  }

  if (mode == -1) {
    for (auto e: S) {
      cout << e.first; 
    }
  } else if (mode == 0) {
    for (auto e: S) {
      if (e.second < max_2_or_3) {
        if ('A' <= e.first && e.first <= 'Z') {
          char c = e.first + ('a' - 'A');
          cout << c; 
        } else {
          cout << e.first;
        }
      } else {
        cout << e.first;
      }
    }
  } else if (mode == 1) {
    for (auto e: S) {
      if (e.second < max_2_or_3) {
        if ('a' <= e.first && e.first <= 'z') {
          char c = e.first - ('a' - 'A');
          cout << c; 
        } else {
          cout << e.first;
        }
      } else {
        cout << e.first;
      }
    }
  }

  cout << endl;

  return 0;
}