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
    int n, m; 
    cin >> n >> m; 
    int a[n][m];
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j)
            a[i][j] = 1;
    
    int og[n][m];
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            int x; 
            cin >> x;
            og[i][j] = x;
            if (x == 0) { 
                for (int ii = 0; ii < n; ++ii) { 
                    a[ii][j] = 0;
                }
                for (int ii = 0; ii < m; ++ii) { 
                    a[i][ii] = 0;
                }
            } 
        }
    }
    string ans = "YES";
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            int t = 0; 
            for (int ii = 0; ii < n; ++ii) { 
                t = t | a[ii][j];
            }
            for (int ii = 0; ii < m; ++ii) { 
                t = t | a[i][ii];
            }
            if (t != og[i][j]) { 
                ans = "NO"; break;
            }
        }
    }
    if (ans == "YES") { 
        cout << ans << endl;
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < m; ++j) { 
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    } else { 
        cout << ans;
    }
}