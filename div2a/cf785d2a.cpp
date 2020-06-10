#include <bits/stdc++.h>

using namespace std;

int main() {
   int n; 
   int ans = 0;
   map<string, int> v;
   string t;
   v["Tetrahedron"] = 4;
   v["Cube"] = 6;
   v["Octahedron"] = 8;
   v["Dodecahedron"] = 12;
   v["Icosahedron"] = 20;
   cin >> n;
   for (int i = 0; i < n; ++i) { 
       cin >> t;
       ans += v[t];
   }
   cout << ans;
}