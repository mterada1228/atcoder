#include <bits/stdc++.h>
using namespace std;

bool exist_7(string num) {
  auto result = find(num.begin(), num.end(), '7');
  if (result == num.end()) {
    return false;
  } else {
    return true;
  }
}

int main() {
  int N, cnt;
  cin >> N;

  cnt = 0;

  for (int i = 7; i <= N; ++i) {
    stringstream ss;
    ss << oct << i;
    string num_oct_str = ss.str();

    if (exist_7(to_string(i))) {
      ++cnt;
    } else if (exist_7(num_oct_str)) {
      ++cnt;
    }
  }

  cout << N - cnt << endl;

  return 0;
}