#include <iostream>
#include <climits>
#include <iomanip>
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
#include <bits/stdc++.h>
#define fileio freopen("input.txt", "r", stdin),freopen("out.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;

queue<ll> q; 
int n, m; 
set<int> vis;
int dfs(ll x) { 
    q.push(x); 
    int len = 1;
    bool found = false;
    int count = 0;
    while (!found) { 
        int tlen = 0;
        for (int i = 0; i < len; ++i) { 
            if (q.front() == m)  { 
                found = 1;
                break;
            }
            if(vis.count(q.front()*2) == 0 && q.front() < m) { 
                q.push(q.front()*2);
                vis.insert(q.front()*2);
                tlen++;
            }
            if(vis.count(q.front()-1) == 0) { 
                q.push(q.front()-1);
                vis.insert(q.front()*2);
                tlen++;
            }
            q.pop();
        }
        len = tlen;
        if (found)
            break;
        ++count;
    }
    return count;    
}
int main() {
    SPEED;
    cin >> n >> m;
    cout << dfs(n); 
}