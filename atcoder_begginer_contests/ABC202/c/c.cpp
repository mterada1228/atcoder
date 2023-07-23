#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  map<int, long long> A;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    ++A[a];
  }

  vector<int> B;
  for (int i = 0; i < n; ++i) {
    int b;
    cin >> b;
    B.push_back(b);
  }

  map<int, long long> BC;
  for (int i = 0; i < n; ++i) {
    int c;
    cin >> c;
    ++BC[B[c-1]];
  }

  long long ans = 0;
  for (auto e: A) {
    ans = ans + (e.second * BC[e.first]); 
  }

  cout << ans << endl;

  return 0;
}