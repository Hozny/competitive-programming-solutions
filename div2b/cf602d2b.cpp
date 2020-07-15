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
/* not a correct solution */ 
int main() {
    SPEED;
    int n; 
    cin >> n; 
    int prev = 0; 
    int cur = 0;
    int ans = 1;
    int lastc = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) { 
        cin >> cur;
        if (i == 0)  { 
            ans = 1;
        } else { 
            if (lastc == 0){ 
                lastc = cur - prev;
                ++ans;
            } else if (cur - prev == -1*lastc) { 
                ++ans;
                lastc *= -1;
            } else if (cur - prev == 0) {
                ++ans;
            } else if (abs(cur-prev) == 1) { 
                lastc = cur-prev;
                ans = 2;
            } else { 
                lastc = 0;
                ans = 1;
            }
        }
        prev = cur;
        count = max(count, ans);
    }
    cout << count;
}