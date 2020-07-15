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
    ll a; 
    int k;
    cin >> a >> k;
    vector<int> v; 
    while (a) { 
        v.push_back(a%10);
        a/=10;
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) { 
        int mx = i;
        for (int j = i; j <= i + k && j < v.size(); ++j) { 
            if (v[j] > v[mx]) { 
                mx = j;
            }
        }
        if (mx != i && v[mx] > v[i]) { 
            for (int j = mx; j > i; --j) { 
                swap(v[j], v[j-1]);
            }
            k -= (mx - i);
        }
        
    }
    for (int i = 0; i < v.size(); ++i) { 
        cout << v[i];
    }
    
}