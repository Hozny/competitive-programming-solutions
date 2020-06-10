#include <bits/stdc++.h>

using namespace std;

int main() {
   int t, n, curr, ans; 
   int g[100001] = {0};
   cin >> t; 
   for (int i = 0; i < t; ++i) {
       cin >> n; 
       for (int j = 0; j < n; ++j) { 
           cin >> g[j];
       }
       ans = 1;
       curr = n;
       sort(g, g + n, greater<int>());
       for (int j = 0; j < n; ++j) { 
           if (g[j] <= curr) { 
               ans += 1;
           } else { 
               curr-=1;
           }
       }
       cout << ans << endl;
   } 
}