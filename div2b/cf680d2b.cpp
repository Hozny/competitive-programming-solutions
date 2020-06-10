#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l; 
    int a[n];
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
    }
    int x;
    int ans = 0;
    l -= 1;
    for (int i = 0; i < n; ++i) { 
        x = 0; 
        if (l + i >= n && l - i >= 0) { 
           if (a[l-i] == 1) { 
               x = 1;
           } 
        } else if (l - i < 0 && l + i < n) {
           if (a[l+i] == 1) { 
               x = 1;
           }
        } else if(l - i >= 0 && l + i < n) { 
            if (a[l-i] == 1 && a[l+i] == 1) { 
                x = 2;
                if (i == 0) --x;
            }
        }
        ans += x;
    }
    cout << ans;
}