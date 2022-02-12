#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;

int N;

int main() {
  cin >> N;
  set<vector<int>> st;

  for (int i = 0; i < N; ++i) {
    int L;
    cin >> L;

    vector<int> a(L);

    for (int j = 0; j < L; ++j) {
      cin >> a[j];
    }

    st.insert(a);
  }

  cout << st.size() << endl;

  return 0;
}