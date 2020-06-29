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
        ll n;
        cin >> n; 
        int c = 0;
        while (n%3==0) { 
            if (n%6==0)
                n/=6;
            else 
                n*= 2;
            ++c;
        }
        if (n==1)
            cout << c << endl;
        else 
            cout << -1 << endl;
    }
}