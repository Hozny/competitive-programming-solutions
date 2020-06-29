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
    int t; 
    cin >> t; 
    while (t--) {
        ll n, k; 
        cin >> n >> k; 
        map<ll, ll> s;
        
        ll temp;
        for (int i = 0; i < n; ++i) { 
            cin >> temp;
            if (temp!=0 && temp%k !=0) { 
                temp = (temp + k) / k * k - temp;
                s[temp]+=1;
            }
        }
        ll m = 0;
        ll add = 0;
        for (auto x : s) { 
            if (x.second >= m) { 
                m = x.second; 
                if (x.first >= add) 
                    add = x.first;
            }
        }
        if (m==0)
            cout << 0 << endl; 
        else
        cout << k*(m-1) + add+1<< endl;
    }
}