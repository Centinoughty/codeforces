// In search of an easy problem
// 800

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    cin >> x;
    if (x == 1) {
      cout << "HARD";
      return 0;
    }
  }

  cout << "EASY";
  return 0;
}