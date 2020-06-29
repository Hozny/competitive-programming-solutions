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

int dp[60001];
int main() {
    int n; 
    cin >> n; 
    // solution works but will TLE
    // for (int i = 1; i <= 60000; ++i) { 
    //     if (sqrt(i)*sqrt(i) == i) { 
    //         dp[i] = 1;
    //     } else { 
    //         dp[i] = INT_MAX;
    //         for (int j = 1; j < i; ++j) { 
    //             dp[i] = min((i/j)*dp[j] + dp[i%j], dp[i]);
    //         }
    //     }
    // }


    /* solution 
    1 4 9 18
    */ 
   vector<int> sq; 
   dp[0] = 0;
   for (int i = 1; i*i <= 60000; ++i) { 
       sq.push_back(i*i);
   }
   for (int i = 1; i <= 60000; ++i) { 
       dp[i] = INT_MAX;
   }
   for (int i = 1; i <= 60000; ++i) { 
       for (auto x : sq) { 
           if (i - x >= 0) { 
               dp[i] = min(dp[i], dp[i-x]+1);
           }
       }
   }
   
   cout << dp[n];
}
/* 
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20  
0 1 2 3 1 2 3 4 2 1 2  3  3

*/ 