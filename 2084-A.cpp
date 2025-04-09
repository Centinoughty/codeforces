#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i ++) {
    int n;
    cin >> n;
    if (n % 2 == 0) {
      cout << -1 << '\n';
    } else {
      for (int j = n; j > 0; j --) {
        cout << j << ' ';
      }

      cout << '\n';
    }
  }

  return 0;
}