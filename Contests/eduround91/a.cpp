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
    int t ;
    cin >> t; 
    while (t--) { 
        int n; 
        cin >> n; 
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ii, jj, kk;
        bool found = false;
        for (int i = 0; i < n; ++i) { 
            ii = jj = kk = i;
            for (int j = 0; j < i; ++j) { 
                if (a[j] < a[ii]) { 
                    ii = j;
                }
            }
            for (int j = i + 1; j < n; ++j) { 
                if (a[j] < a[kk]) { 
                    kk = j;
                }
            }
            if (ii != jj && jj != kk && ii != kk) { 
                found = true;
                break;
            }
        }
        if (!found) { 
            cout << "NO" << endl;
        } else { 
            cout << "YES" << endl << ii+1 << " " << jj+1 << " " << kk+1 << endl;
        }
    }
}