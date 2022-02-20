#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <map>
#include <set>

using namespace std;

int N;

int main() {
  cin >> N;

  map<int, vector<int>> mp;

  for (int i = 1; i < N; ++i) {
    int a, b;
    cin >> a >> b;

    mp[a].push_back(b);
    mp[b].push_back(a);
  }

  for (int i = 1; i <= N; ++i) {
    if (mp[i].size() == N - 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;

  return 0;
}