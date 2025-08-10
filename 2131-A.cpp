#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    int k;
    cin >> k;
    int count = 0;
    vector<int> a, b;
    for (int j = 0; j < k; j ++) {
      int temp;
      cin >> temp;
      a.push_back(temp);
    }

    for (int j = 0; j < k; j ++) {
      int temp;
      cin >> temp;
      b.push_back(temp);
    }

    for (int j = 0; j < k; j ++) {
      if (a[j] > b[j]) {
        count += a[j] - b[j];
      }
    }

    cout << count + 1 << endl;
  }

  return 0;
}