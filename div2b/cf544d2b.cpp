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
    int n, k; 
    cin >> n >> k; 
    int mx; 
    mx = (n*n + 1) / 2;
    if (k > mx) { 
        cout << "NO";
    } else { 
        cout << "YES" << endl;
        bool s = 0; 
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < n; ++j) { 
                if (k && j % 2 == s) { 
                    cout << "L";    
                    --k;
                } else { 
                    cout << "S";
                }
            }
            cout << endl;
            s = !s;
        }
    }
}