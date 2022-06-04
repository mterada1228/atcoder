#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, W;

  cin >> A >> B >> W;

  int max_i = 0;
  int min_i = pow(10, 6) + 1;

  for (int i = 1; i <= pow(10, 6); ++i) {
    if (A * i <= 1000 * W && 1000 * W <= B * i) {
      max_i = max(i, max_i); 
      min_i = min(i, min_i); 
    }
  }

  if (max_i == 0) {
    cout << "UNSATISFIABLE" << endl;
  } else {
    cout << min_i << " " << max_i << endl;
  }

  return 0;
}