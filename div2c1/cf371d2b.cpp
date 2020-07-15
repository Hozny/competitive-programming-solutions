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
    int a, b; 
    cin >> a >> b;  
    // 2, 3, 5
    int ad[3] = {0}, bd[3] = {0};
    while (1) { 
        if (a % 2 == 0) { 
            a/=2;
            ad[0]++;
        } else if (a % 3 == 0) { 
            a/=3;
            ad[1]++;
        } else if (a % 5 == 0) { 
            a/=5;
            ad[2]++;
        } else { 
            break;
        }
    }
    while (1) { 
        if (b % 2 == 0) { 
            b/=2;
            bd[0]++;
        } else if (b % 3 == 0) { 
            b/=3;
            bd[1]++;
        } else if (b % 5 == 0) { 
            b/=5;
            bd[2]++;
        } else { 
            break;
        }
    }
    if (a != b) { 
        cout << -1;
    } else { 
        int ans = 0;
        for (int i = 0; i < 3; ++i) { 
            ans += abs(ad[i] -bd[i]);
        }
        cout << ans;
    }
}