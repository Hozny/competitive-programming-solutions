#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, cx, cy, ex, ey; 
    cin >> m >> n >> cx >> cy; 
    int t; 
    cin >> t; 
    long long ans = 0;
    int d = 0;
    for (int ti = 0; ti < t; ++ti) { 
        cin >> ex >> ey; 
        int vd = 0;
        int hd = 0;
        if (ex == 0) { 
            hd = INT_MAX;
        } else if(ex > 0) { 
            hd = (m-cx)/ex;
        } else { 
            hd = abs((cx-1)/ex);
        }
        if (ey == 0) { 
            vd = INT_MAX;
        } else if (ey > 0) { 
            vd = (n-cy)/ey;
        } else { 
            vd = abs((cy-1)/ey);
        }
        // cout << cx << " " << cy << " -> " << hd << " " << vd << endl;
        d = min(vd,hd); 
        cx += ex*d;
        cy += ey*d;
        ans += d;
    }
    cout << ans;
}