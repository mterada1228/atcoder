#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, string> x, pair<string, string> y) {
  return x.second < y.second;
}

int main() {
  string x;
  cin >> x;
  map<char, string> new_alpahbets;
  for (int i = 0; i < x.length(); ++i) {
    if (i <= 9) {
      new_alpahbets[x[i]] = to_string(i);
    } else {
      new_alpahbets[x[i]] = 'a' + (i - 10);
    }
  }

  int n;
  cin >> n;
  vector<pair<string, string>> S;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;

    string numerical_name = "";
    for (int j = 0; j < s.length(); ++j) {
      numerical_name += new_alpahbets[s[j]];
    }

    S.push_back(make_pair(s, numerical_name));
  }

  sort(S.begin(), S.end(), compare);

  for (auto e: S) {
    cout << e.first << endl;
  }

  return 0;
}