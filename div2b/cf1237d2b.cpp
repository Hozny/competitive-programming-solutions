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
// #include <bits/stdc++.h>
#define fileio freopen("input.txt", "r", stdin),freopen("out.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;

int main() { 
    SPEED; 
    int n; 
    cin >> n; 
    queue<int> in, out; 
    for (int x, i = 0; i < n; ++i) { 
        cin >> x; 
        in.push(x);
    }
    for (int x, i = 0; i < n; ++i) { 
        cin >> x; 
        out.push(x); 
    } 
    set<int> skip; 
    int expected = in.front();
    int ans = 0;
    cout << out.size() << " " << in.size() << endl;
    while (out.size() > 0) { 
        while (skip.count(in.front()) != 0) { 
            in.pop();
        }
        if(skip.count(out.front()) == 0 && out.front() != in.front()) { 
            skip.insert(out.front());
            ++ans;
        } else { 
            in.pop();
        }
        out.pop();
    } 
    cout << ans;
}