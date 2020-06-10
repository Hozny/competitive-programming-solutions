#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, x; 
   int a[1001] = {0};
   cin >> n; 
   for (int i = 0; i < n; ++i) { 
       cin >> x; 
       a[x] += 1; 
   }
   sort(a, a + 1001, greater<int>()); 
   if (n >= 2 * a[0] - 1) { 
       cout << "YES"; 
   } else { 
       cout << "NO";
   }
} 