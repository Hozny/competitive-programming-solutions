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
map<string, int> mem; 
vector<int> v; 
void solve(string cur, int n) { 
    if (cur.size() > 0)
        v.push_back(stoi(cur));
    if (n > 0) { 
        solve(cur + '4', n-1);
        solve(cur + '7', n-1);
    }
}
int main() {
    SPEED;
    solve("", 9); 
    sort(v.begin(), v.end());
    int n; 
    cin >> n; 
    
    for (int i = 0; i < v.size(); ++i) { 
        if (v[i] == n) { 
            cout << i + 1; 
            break;
        }
    }
}