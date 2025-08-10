#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i ++) {
    int n, k;
    cin >> n >> k;
    multiset<int> S, T;
    for (int j = 0; j < n; j ++) {
      int temp;
      cin >> temp;
      S.insert(temp);
    }

    for (int j = 0; j < n; j ++) {
      int temp;
      cin >> temp;
      T.insert(temp);
    }

    for (auto it1 : T) {
      auto it2 = S.find(it1);
      if (it2 != S.end()) {
        S.erase(it1);
        T.erase(it2);
      }
    }

    int flag = 0;
    for (int s : S) {
      int t1 = s + k;
      int t2 = abs(s - k);
      
      auto p1 = T.find(t1);
      auto p2 = T.find(t2);

      if (p1 != S.end()) {
        auto temp1 = S.find(s);
        S.erase(temp1);
        T.erase(p1);
      } else if (p2 != S.end()) {
        auto temp1 = S.find(s);
        S.erase(temp1);
        T.erase(p2);
      } else {
        flag = 1;
        break;
      }
    }

    if (flag) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }

  return 0;
}