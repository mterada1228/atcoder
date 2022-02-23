#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

string S;

int main() {
  cin >> S;
  vector<string> arr;

  for (int i = 0; i < S.length(); ++i) {
    S = *(S.end() - 1) + S;
    S.pop_back();

    arr.push_back(S);
  }

  sort(arr.begin(), arr.end());

  cout << *arr.begin() << endl;
  cout << *(arr.end() - 1) << endl;

  return 0;
}