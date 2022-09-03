#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  vector<int> cards = { a, b, c, d, e };
  map<int, int> mp;

  for (int i = 0; i < cards.size(); ++i) {
    mp[cards[i]] = mp[cards[i]] + 1;
  }
  
  for (int i = 0; i < cards.size(); ++i) {
    if (mp[cards[i]] != 2 && mp[cards[i]] != 3) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}