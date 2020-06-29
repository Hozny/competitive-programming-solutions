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
        stack<char> s; 
        char c; 
        int n; 
        cin >> n; 
        for (int i =0; i < n; ++i) { 
            cin >> c; 
            if (s.size() > 0 && c != s.top() && c!= '(') { 
                s.pop();
            } else { 
                s.push(c); 
            }
        }
        cout << s.size() /2<< endl;
    }
}