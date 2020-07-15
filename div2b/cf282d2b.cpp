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

#define fileio freopen("input.txt", "r", stdin),freopen("out.txt", "w", stdout)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long

using namespace std;

int main() { 
    SPEED; 
    int n; 
    cin >> n; 
    int a, g; 
    ll sa, sg; 
    sa = sg = 0;
    string ans = "";
    for (int i = 0; i < n; ++i) { 
        cin >> a >> g; 
        if (abs(sa + a - sg) < abs(sa - (sg + g))) { 
            sa += a; 
            ans += 'A';
        }  else { 
            sg += g;
            ans += 'G';
        }
    } 
    if (abs(sa - sg) > 500) { 
        cout << -1;
    } else { 
        cout << ans;
    }
    return 0;
}
