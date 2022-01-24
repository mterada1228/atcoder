#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> a(2 * N - 1, vector<int>(2 * N, 0));

  // 相性
  for (int i = 0; i < 2 * N - 1; ++i) {
    for (int j = i; j < 2 * N - 1; ++j) {
      cin >> a[i][j];
    }
  }

  // 参加者の配列
  vector<int> guest(2 * N);
  for (int i = 0; i < 2 * N; ++i) guest[i] = i;

  do {
    // 相性の配列
    vector<int> combination(N, 0);
    for (int i = 0; i < 2 * N; i += 2) {
      int f, s;
      f = guest[i];
      s = guest[i + 1];
      if (f > s) swap(f, s);

      combination.push_back(a[f][s]);
    } 

  } while (next_permutation(guest.begin(), guest.end())) 

  // for debug
  cout << endl;
  cout << "相性" << endl;
  for (int i = 0; i < 2 * N - 1; ++i) {
    for (int j = 0; j < 2 * N - 1; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "参加者" << endl;
  for (int i = 0; i < 2 * N; ++i) {
    cout << guest[i] << endl;
  }

  return 0;
}