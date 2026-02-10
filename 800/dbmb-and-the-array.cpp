#include <bits/stdc++.h>
using namespace std;
// link: https://codeforces.com/problemset/problem/2193/A

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, s, x; cin >> n >> s >> x;

    int sum = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      sum += a;
    }

    if (sum > s || (s - sum) % x != 0) {
      cout << "NO\n";
    } else { 
      cout << "YES\n";
    }
  }
  
  return 0;
}
