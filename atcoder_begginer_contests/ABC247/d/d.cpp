#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;

  queue<vector<long long>> boals;

  for (int i = 0; i < Q; ++i) {
    int type;
    cin >> type;

    if (type == 1) {
      long long number, quantity;
      cin >> number >> quantity;
      boals.push(vector<long long> { number, quantity });
    } else {
      long long quantity;
      long long sum = 0;
      cin >> quantity;

      while (boals.front()[1] < quantity) {
        sum += boals.front()[0] * boals.front()[1];
        quantity -= boals.front()[1];
        boals.pop();
      }

      if (quantity != 0) {
        sum += boals.front()[0] * quantity;
        boals.front()[1] -= quantity;
      }

      cout << sum << endl;
    }
  }
  
  return 0;
}