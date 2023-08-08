#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> C;

  for (int i = 0; i < n; ++i) {
    int c;
    cin >> c;
    C.push_back(c);
  }

  map<int, int> mp;
  set<int> st;

  for (int i = 0; i < k; ++i) {
    ++mp[C[i]];
    st.insert(C[i]);
  }

  int max = st.size();

  for (int i = 1; i <= n - k; ++i) {
    int del = C[i - 1];
    int ins = C[k - 1 + i];

    --mp[del];
    ++mp[ins];

    if (mp[del] == 0) {
      st.erase(del);
    }

    if (mp[ins] == 1) {
      st.insert(ins);
    }

    int st_size = st.size();
    if (max <= st_size) max = st_size;
  }

  cout << max << endl;

  return 0;
}
