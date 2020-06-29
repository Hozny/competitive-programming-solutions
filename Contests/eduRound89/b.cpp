/* didn't solve it in time of contest*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    int n, x, m; 
    for (int ti = 0; ti < t; ++ti) { 
        cin >> n >> x >> m;
        vector<int> l(m, 0);
        vector<int> r(m, 0); 
        int prevr, prevl; 
        prevr = prevl = x; 
        for (int i = 0; i < m; ++i) { 
            cin >> l[i] >> r[i];
        }
        for (int i =0 ; i < m; ++i) { 
            if (l[i] > prevr || r[i] < prevl) continue;
            prevl=min(prevl, l[i]);
            prevr=max(prevr, r[i]);
        }
        cout << prevr-prevl+1 << endl;
    }
}