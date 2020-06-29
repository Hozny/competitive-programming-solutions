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

int main() {
    SPEED;
    int a, x, y; 
    cin >> a >> x >> y; 
    bool p = true;
    int t; 
    t = (y+a)/a;
    int w; 
    if (t > 2) { 
        if ((t - 3) % 2 == 0) { 
            w = 2;
        } else { 
            w = 1;
        }
    } else { 
        w = 1;
    }
    if (y % a == 0)
        p = false;
    if (w == 1) { 
        if (abs(x) >= (a+1)/2 )
            p = false;
    } else { 
        if (x == 0 || abs(x) >= a)
            p = false;
    }
    int ans = 0; 
    if (p) { 
        if (t > 2) { 
            ans += t; 
            ans += ((t-2) + 1)/2;
            if (w == 2 && x < 0)
                --ans;
        } else { 
            ans = t;
        }
    } else 
        ans = -1;
    
    cout << ans;
    
}