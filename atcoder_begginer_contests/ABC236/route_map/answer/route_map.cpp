#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> s(N), t(M);

  for (int i = 0; i < N; ++i) cin >> s[i];
  for (int j = 0; j < M; ++j) cin >> t[j];

  set<string> rapid(t.begin(), t.end());

  for (const string& x: s) {
    // set.count(x) は set に含まれるキー x の数を返す
    cout << (rapid.count(x) ? "Yes" : "No") << endl;
  }

  return 0;
}