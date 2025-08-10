#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i ++) {
    int n;
    cin >> n;
    for (int j = 0; j < n; j ++) {
      if (j % 2 == 0) {
        cout << -1 << " ";
      } else {
        if (j == n - 1) {
          cout << 2 << endl;
        } else {
          cout << 3 << " ";
        }
      }
    }
  }

  return 0;
}