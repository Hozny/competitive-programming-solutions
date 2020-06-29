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

/* Wrong answer */ 

bool dp[31623];
int nax =1000000001; 
int main() {
    int t; 
    int sq;
    dp[1] = 0;
    for (int i = 2; i*i <= nax; ++i) { 
        bool m = !dp[i-1];
        for (int j = 3; j <= i; j+=2) { 
            if (i%j==0)
                m = max(m, !dp[i/j]);
            if (m == 1)
                break;
        }
        dp[i] = m;
        
        sq = i;
    }
    cin >> t; 
    while(t--) { 
        int n; 
        cin >> n; 
        
        
        
        if (n == 1) { 

            cout << "FastestFinger" << endl;
        } 
        else if (n == 2 || n%3==0 || n%2!=0) { 
            cout << "Ashishgup" << endl;
        } else { 
            cout << "FastestFinger" << endl;
        }
    }
}