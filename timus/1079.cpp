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
    int dp[100000]; 
    int mx[100000];
    dp[0] = 0;
    dp[1] = 1; 
    int maax = 1;
    mx[0] = 0;
    mx[1] = 1;
    for (int i = 2; i < 100000; ++i) { 
        if (i%2==0) { 
            dp[i] = dp[i/2];
        } else { 
            dp[i] = dp[i/2] + dp[i/2 + 1];
        }
        maax = max(maax, dp[i]);
        mx[i] = maax;
    }
    vector<int> ans;
    while (true) { 
        cin >> n; 
        if (n == 0)
            break;
        ans.push_back(mx[n]); 
    }
    for (auto x : ans) { 
        cout << x << endl;
    }

}