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

int n; 
vector<vector<int>> v;
stack<int> ans;
set<int> vis;
void dfs(int cur) { 
    for (auto x : v[cur]) { 
        if (x != 0 && vis.count(x-1) == 0) { 
            dfs(x-1);
            vis.insert(x-1);
        }
    }
    vis.insert(cur);
    ans.push(cur+1);
}
void topsort() { 
    for (int i = 0; i < n; ++i) { 
        if (vis.count(i) == 0)
            dfs(i);
    }
}

int main() {
    cin >> n; 
    for (int i = 0; i < n; ++i)  { 
        int x; 
        vector<int> temp;
        while (true) {
            cin >> x; 
            if (x == 0)
                break;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    topsort();
    for (int i = 0; i < n; ++i)  { 
        cout << ans.top() << " ";
        ans.pop();
    }
    
}