#include <bits/stdc++.h>
using namespace std;

bool check1(vector<char> a, vector<char> b) {
  if (a == b) {
    return true;
  } else {
    return false;
  }
}

bool check2(vector<char> a, vector<char> b) {
  if (a.size() >= 2) {
    if (a.size() <= b.size()) {
      return true;
    } else {
      return false;
    }
  }
  return false;
}

int main() {
  string s, t;
  cin >> s >> t;

  vector<vector<char>> s_arr;
  vector<char> s_arr_part = { s[0] };
  char now_s = s[0];

  for (int i = 1; i < s.size(); ++i) {
    if (s[i] == now_s) {
      s_arr_part.push_back(s[i]);
    } else {
      s_arr.push_back(s_arr_part);
      s_arr_part = { s[i] };
      now_s = s[i];
    }
  }
  s_arr.push_back(s_arr_part);

  vector<vector<char>> t_arr;
  vector<char> t_arr_part = { t[0] };
  char now_t = t[0];

  for (int i = 1; i < t.size(); ++i) {
    if (t[i] == now_t) {
      t_arr_part.push_back(t[i]);
    } else {
      t_arr.push_back(t_arr_part);
      t_arr_part = { t[i] };
      now_t = t[i];
    }
  }
  t_arr.push_back(t_arr_part);

  if (s_arr.size() != t_arr.size()) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < s_arr.size(); ++i) {
    if (!check1(s_arr[i], t_arr[i]) && !check2(s_arr[i], t_arr[i])) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}