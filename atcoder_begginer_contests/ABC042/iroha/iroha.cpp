#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> A(3);
  for (int i = 0; i < 3; ++i) cin >> A[i];

  int count_five = 0;
  int count_seven = 0;

  for (int k = 0; k < 3; ++k) {
    if (A[k] == 5) ++count_five;
    if (A[k] == 7) ++count_seven;
  }

  if (count_five == 2 && count_seven == 1) {
    cout << "YES" << endl;
    return 0;
  }

  cout << "NO" << endl;
}