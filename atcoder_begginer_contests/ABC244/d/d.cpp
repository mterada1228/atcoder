#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<char> S(3);
  vector<char> T(3);

  for (int i = 0; i < 3; ++i) cin >> S[i];
  for (int i = 0; i < 3; ++i) cin >> T[i];

  vector<vector<char>> M(3);

  M[0] = {T[0], T[2], T[1]}; 
  M[1] = {T[2], T[1], T[0]}; 
  M[2] = {T[1], T[0], T[2]}; 

  for (int i = 0; i < 3; ++i) {
    if (S[0] == M[i][0] && S[1] != M[i][1] && S[2] != M[i][2]) {
      cout << "Yes" << endl;
      return 0;
    } else if (S[0] != M[i][0] && S[1] == M[i][1] && S[2] != M[i][2]) {
      cout << "Yes" << endl;
      return 0;
    } else if (S[0] != M[i][0] && S[1] != M[i][1] && S[2] == M[i][2]) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}