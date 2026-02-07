#include <bits/stdc++.h>
using namespace std;

//link: https://codeforces.com/problemset/problem/2193/B

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;
  
  while (t--) {
    int n; cin >> n;
    vector<int> p(n);
    
    for (int& x : p) cin >> x;
    
    int i = 0;
    while (i < n && p[i] == n - i) i++;
    
    if (i < n) {
      auto it = find(p.begin() + i, p.end(), n - i);
      reverse(p.begin() + i, it + 1);
    }
    
    for (int i = 0; i < n; i++) {
      cout << p[i] << (i == n-1 ? "\n" : " ");
    }
  }
  
  return 0;
}
