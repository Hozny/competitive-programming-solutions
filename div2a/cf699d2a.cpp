#include <bits/stdc++.h>

using namespace std;

int main() {
   string dir; 
   int a[2]; 
   int n; 
   cin >> n; 
   cin >> dir;
   int prev, cur;
   long min = LONG_MAX;
   bool found = false;
   cin >> prev;
   for (int i = 1; i < n; ++i) { 
      cin >> cur;
      if (dir[i] == 'L' && dir[i-1] == 'R') { 
          if ((cur - prev) / 2 < min) { 
              min = (cur - prev) / 2;
              found = true;
          }
      }
      prev = cur;
   }
   if (found) { 
       cout << min; 
   } else { 
       cout << -1;
   }
}