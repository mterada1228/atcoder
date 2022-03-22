#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> numbers;
  for (int i = 1; i <= 2 * N + 1; ++i) numbers.push_back(i);

  for (int i = 1; i <= 2 * N + 1; ++i) {
    if (i % 2 != 0) {
      cout << *numbers.rbegin() << endl;
      cout << flush;
      numbers.pop_back();
    } else {
      int x;
      cin >> x; 
      auto tmp = remove(numbers.begin(), numbers.end(), x);
      numbers.erase(tmp, numbers.end());
    }
  }

  return 0;
}