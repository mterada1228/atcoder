#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s.substr(s.length() - 2) == "er") cout << "er" << endl;
  else if (s.substr(s.length() - 3) == "ist") cout << "ist" << endl;

  return 0;
}