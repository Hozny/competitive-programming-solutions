#include <bits/stdc++.h>

using namespace std;

int main() {
    int vp, vd, t, f, c; 
    cin >> vp >> vd >> t >> f >> c; 
    if (vp >= vd) { 
        if (t == 0) { 
            cout << 1 << endl;
        } else { 
            cout << 0 << endl;
        }
    } else { 
        if(vd*(vp*t) / (vd-vp) >= c) { 
            cout << 0 << endl;
        } else { 
            int ans = 1;
            long double curd = vd*(vp*t)/(vd-vp);
            while (true) { 
                curd = curd + f*vp + (curd*vp/vd);
                curd = curd*vd/(vd-vp);
                if (curd >= c) { 
                    break;
                }
                ++ans;
            }
            cout << ans << endl;
        }
    }
}