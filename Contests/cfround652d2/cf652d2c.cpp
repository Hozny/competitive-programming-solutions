#include <iostream>
#include<climits>
#include<iomanip>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>

using namespace std; 

using namespace std;

int main() {
    int t; 
    cin >> t; 
    while(t--) { 
        int n, k;
        cin >> n >> k;
        int a[n];
        int w[k];
        for (int i = 0; i < n; ++i) { 
            cin >> a[i];
        }
        sort(a, a+n);
        long long waste = 0;
        int take = 0;
        int dbl = 0;
        for (int i = 0; i < k; ++i) { 
            cin >> w[i];
            take += w[i];
            waste += max(w[i]-2, 0);
            if (w[i] == 1)
                ++dbl;
        }
        sort(w, w+k); 
        int count = 0;
        long long ans = 0;
        int e = n-1;
        int s = n-take;
        for (int i = 0; i < k; ++i) { 
            if (w[i] == 1) {
                ans+= 2*a[e];
                --e;
            } else { 
                ans+= a[e];
                ans+= a[s];
                s += w[i]-1;
                --e;
            }
            // cout << e << " " << s << endl;
        }
        cout << ans << endl;
    }
}