#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int a[n];
    
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
    }
    vector<vector<int>> dp;
    
    for (int i = 0; i < n; ++i) { 
        vector<int> temp = {a[i]};
        dp.push_back(temp);
    } 
    bool flag;
    
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < n; ++j) { 
            flag = true;
            for (int k = 0; k < dp[i].size(); ++k) { 
                if (dp[i][k]%a[j]!=0 && a[j]%dp[i][k]!=0) { 
                    flag = false;
                }
            }
            if (flag == true && i!=j) { 
                dp[i].push_back(a[j]);
            }
        }
    }
    
    int ans = 0; 
    for (int i = 0; i < (int) dp.size(); ++i) 
        if ((int) dp[i].size() > ans)
            ans = dp[i].size();
    cout << ans;
}