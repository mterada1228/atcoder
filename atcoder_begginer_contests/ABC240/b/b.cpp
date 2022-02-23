#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;

int main() {
  int N;
  set<int> st;

  cin >> N;

  for (int i = 0; i < N; ++i) {
    int a;
    cin >> a;
    st.insert(a);
  }

  cout << st.size() << endl;

  return 0;
}