#include <bits/stdc++.h>

using namespace std;

int main() {
   int t, n, m; 
   cin >> t; 
   for (int i = 0; i < t; ++i) { 
       cin >> n >> m; 
       cout << (n*m + 1) / 2 << endl;
    //    cout << ((max(n, m) + 1) / 2) * min(m, n) << endl; 
   } 
}