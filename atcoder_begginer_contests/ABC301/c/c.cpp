#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  map<char, int> s_mp, t_mp;

  for (char e: s) {
    ++s_mp[e];
  }

  for (char e: t) {
    ++t_mp[e];
  }

  for (char i = 'a'; i <= 'z'; ++ i) {
    if (s_mp[i] > t_mp[i]) {
      if (
        i == 'a' ||
        i == 't' ||
        i == 'c' ||
        i == 'o' ||
        i == 'd' ||
        i == 'e' ||
        i == 'r'
      ) {
        t_mp['@'] = t_mp['@'] - (s_mp[i] - t_mp[i]);
        t_mp[i] = t_mp[i] + (s_mp[i] - t_mp[i]);

        if (t_mp['@'] < 0) {
          cout << "No" << endl;
          return 0;
        }
      } else {
        cout << "No" << endl;
        return 0;
      }
    } else if (s_mp[i] < t_mp[i]) {
      if (
        i == 'a' ||
        i == 't' ||
        i == 'c' ||
        i == 'o' ||
        i == 'd' ||
        i == 'e' ||
        i == 'r'
      ) {
        s_mp['@'] = s_mp['@'] - (t_mp[i] - s_mp[i]);
        s_mp[i] = s_mp[i] + (t_mp[i] - s_mp[i]);

        if (s_mp['@'] < 0) {
          cout << "No" << endl;
          return 0;
        }
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}