#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> P;
  for (int i = 0; i < n; ++i) {
    int p;
    cin >> p;
    P.push_back(p);
  }

  // 順列の逆順で並び替えしてくれる標準ライブラリ。
  // 1回実行すると1つ前の順列で並び替えを行う。
  prev_permutation(P.begin(), P.end());

  for (auto e :P) {
    cout << e << " ";
  }
  cout << endl;
  
  return 0;
}