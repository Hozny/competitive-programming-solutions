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
    int n; 
    cin >> n; 
    int a[n];
    int dp[n+1];
    int mx = 1;
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
    }
    sort(a, a+n);
    memset(dp, 0, (n+1)*sizeof(dp[0]));
    dp[0] = a[0];
    for (int i = 1; i <= n; ++i) { 
        if (dp[i-1]|a[i] > dp[i-1]) { 
            dp[i] = dp[i-1]|a[i-1];
            a[i-1] = dp[i]&dp[i-1];
        }
    }

   /* 
    for (int i = 0; i < n; ++i) { 
        for (int j = n-1; j > i; --j) { 
            if (a[i]|a[j] > a[i]) { 
                int x = a[i];
                int y = a[j];
                a[i] = x|y;
                a[j] = x&y;
            } else {
                break;
            }
        }
        // for (int j = 0; j < n; ++j)
        //     cout << a[j] << " ";
        // cout << endl;
    }*/
    for (int i = 0; i < n; ++i) { 
        cout << a[i] << " ";
    }
    long long ans = 0;
    for (int i = 0; i < (n+1)/2; ++i) 
        ans+=mx*mx;
    
    
    cout << ans;
}