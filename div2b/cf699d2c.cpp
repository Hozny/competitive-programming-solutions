#include <bits/stdc++.h>

using namespace std;
int n; 
vector<int> v;
vector<vector<int>> mem;

int solve(int i, int prev) { 
    if (i == n)
        return 0;
    int &ret = mem[i][prev];
    if (ret != -1)
        return ret;
    
    
    if (v[i] == 0) 
        return ret = 1+solve(i+1, 0);
    int ans = 1+solve(i+1, 0);
    if (v[i] == 1) {
        if (prev != 2)
            ans = min(ans, solve(i+1, 2));
    } else if (v[i] == 2) {
        if (prev != 1)
            ans = min(ans, solve(i+1, 1));
    } else { 
        if (prev == 0)
            ans = min(ans, min(solve(i+1, 1), solve(i+1, 2)));
        else if(prev == 1)
            ans = min(ans, solve(i+1, 2));
        else if (prev == 2)
            ans = min(ans, solve(i+1, 1));
    }
    
    return ret = ans;
    
}

int main() {
    cin >> n; 
    int x; 
    vector<int> temp; 
    for (int i = 0; i <= n; ++i) { 
        mem.push_back({-1, -1, -1});
    }

    for (int i = 0; i<n; ++i) { 
        cin >> x; 
        v.push_back(x);
    }
    cout << solve(0, 0);
}