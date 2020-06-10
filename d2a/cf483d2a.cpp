#include <bits/stdc++.h>

using namespace std;

bool coprime(long long a, long long b) { 
    long long t;
    if (b > a) { 
        t = a; 
        a = b; 
        b = a;
    }
    while(0 != b) { 
        t = b; 
        b = a % b;
        a = t;
        
    //    cout << "a: " << a << "b: " << b << endl;
    }
    return a == 1;
}

int main() {
   long long l, r; 
   cin >> l >> r;
   long long a, b, c;
   long long ans[3];
   int d = r - l;
   bool found = false;
   for (int i = 0; i <= d; ++i) { 
       a = i + l;
       for (int j = 0; j <= d; ++j) { 
           b = j + l;
           if (coprime(a, b)) { 
               for(int z = 0; z <= d; ++z) { 
                   c = z + l;
                   if (coprime(b,c) && !coprime(a,c) && a != c && b != c) { 
                       found = true;
                       ans[0] = a; ans[1] = b; ans[2] = c;
                       break;
                   }
               }
           }
           if (found) break;
       }
       if (found) break;
   } 
   sort(ans, ans + 3);
   if (found) { 
       cout << ans[0] << " " << ans[1] << " " << ans[2];
   } else { 
       cout << - 1;
   }
}