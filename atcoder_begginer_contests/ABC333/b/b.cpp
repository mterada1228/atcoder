#include <bits/stdc++.h>
using namespace std;

bool exist(vector<char> array, char c) {
  auto result = find(array.begin(), array.end(), c);
  if (result == array.end()) {
    return false;
  } else {
    return true;
  }
}

int main() {
  map<char, vector<char>> mp;

  mp['A'] = { 'E', 'B' };
  mp['B'] = { 'A', 'C' };
  mp['C'] = { 'B', 'D' };
  mp['D'] = { 'C', 'E' };
  mp['E'] = { 'D', 'A' };

  string S;
  string T;

  cin >> S >> T;

  // 0: 隣り合う, 1: 隣り合わない 
  int s_flg, t_flg;

  if (exist(mp[S[0]], S[1])) {
    s_flg = 0;
  } else {
    s_flg = 1;
  }

  if (exist(mp[T[0]], T[1])) {
    t_flg = 0;
  } else {
    t_flg = 1;
  }

  if (s_flg == t_flg) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}