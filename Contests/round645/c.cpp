#include <bits/stdc++.h>

using namespace std;

long long numpath(int x, int y, int x2, int y2) { 
    if (x2 <= x || y2 <= y) { 
        return 1; 
    } else { 
        return numpath(x, y, x2-1, y2) + numpath(x, y, x2, y2-1);
    }
}
int main() {
   // in a 3 by 3 there are 2 identical paths
   // so if it is a 9by 9, there are 4 identical paths, 
   // number of 3by3 in path = min x//3, y//3
   int n; 
   int x, y, x2, y2; 
   long long ans = 0; 
   long long dup = 0; 
   int w, h; 
   cin >> n; 
   for (int j = 0; j < n; ++j) { 
       cin >> x >> y >> x2 >> y2; 
       w = max(x2 - x + 1, 0); 
       h = max(y2 - y + 1, 0); 

       ans = numpath(x, y, x2, y2);

       dup = 0; 
       for (int i = 0; i < max(w, h); ++i) {
           if (w >= 3 && h >= 3) { 
               w -= 2; 
               h -= 2;
               dup += 1;
           } else { 
               break;
           }
       }
      // dup = mink(w/3, h/3);
       if (dup == 0) { 
           dup = 0; 
       } else { 
           long long ndup = 1; 
           
           for (int i = 0; i < dup; ++i) { 
               ndup *=2;
           }
           ndup -= 1;
           ans = ans - ndup;
       }
       if (x2 < x || y2 < y) { 
           cout << 0 << endl; 
       } else { 
           cout << ans << endl;
       }
   } 
}