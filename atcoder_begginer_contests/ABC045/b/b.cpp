#include <bits/stdc++.h>
using namespace std;

int main() {
  string sa, sb, sc;
  cin >> sa >> sb >> sc;

  map<char, string> mp;

  reverse(sa.begin(), sa.end());
  reverse(sb.begin(), sb.end());
  reverse(sc.begin(), sc.end());

  mp['a'] = sa;
  mp['b'] = sb;
  mp['c'] = sc;

  char player = 'a';

  while (true) {
    if (mp[player].size() == 0) {
      char ans = toupper(player);
      cout << ans << endl;
      return 0;
    }

    char next_player = mp[player][mp[player].size() - 1];
    mp[player].pop_back();

    player = next_player;
  }

  return 0;
}