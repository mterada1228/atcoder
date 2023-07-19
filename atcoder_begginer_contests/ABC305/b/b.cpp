#include <bits/stdc++.h>
using namespace std;

int main() {
  char p, q;
  cin >> p >> q;

  vector<int> sum(7);

  sum[0] = 0;
  sum[1] = 3;
  sum[2] = sum[1] + 1;
  sum[3] = sum[2] + 4;
  sum[4] = sum[3] + 1;
  sum[5] = sum[4] + 5;
  sum[6] = sum[5] + 9;

  int p_i = p - 'A';
  int q_i = q - 'A';

  cout << sum[max(p_i, q_i)] - sum[min(p_i, q_i)] << endl;

  return 0;
}