// Nearly Lucky Number
// 800

#include <bits/stdc++.h>
using namespace std;

bool isLucky(string s) {
  for (const char c : s) {
    if (c != '4' && c != '7') {
      return false;
    }
  }

  return true;
}

int main() {
  long long int n;
  cin >> n;
  int count = 0;

  string s = to_string(n);
  for (const char c : s) {
    if (c == '4' || c == '7') {
      count ++;
    }
  }

  string p = to_string(count);
  if (isLucky(p)) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}