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
/* im just not gonna do this, round is unrated and this question is purely implementation heavy*/
int main() {
    SPEED;
    int n, m, x, k, y; 
    cin >> n >> m; 
    cin >> x >> k >> y; 
    int a[n], b[m];
    map<int, int> pos; 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
        pos[a[i]] = i;
    }
    for (int i = 0; i < m; ++i) { 
        cin >> b[i];
    }
    bool possible = true;
    int curpos = 0;
    for (int i = 0; i < m; ++i) { 
        if (pos[b[i]] < curpos) { 
            possible = false;        
            break;
        }
        if (curpos == pos[b[i]]) { 
            ++curpos;
        } else if (pos[b[i]] - curpos <= k) { 

        }
    }
}