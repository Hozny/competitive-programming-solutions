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
/* for faster implementation, use an array of strings to build the new answer
= {"","","1","2","3","322","5","53","7","7222","7332"} then build the string
and sort then print */ 
int main() {
    SPEED;
    int n; 
    cin >> n; 
    vector<int> pot; 
    for (int i = 0; i < n; ++i) { 
        char x; 
        cin >> x; 
        x -= '0';
        // all of this can be reduced to one line with smarter implementation
        if (x == 4) { 
            pot.push_back(3);
            pot.push_back(2);
            pot.push_back(2);
        } else if (x == 6) { 
            pot.push_back(5); 
            pot.push_back(3);
        } else if (x == 8) { 
            pot.push_back(7);
            pot.push_back(2);
            pot.push_back(2);
            pot.push_back(2);
        } else if (x == 9) { 
            pot.push_back(7);
            pot.push_back(3);
            pot.push_back(3);
            pot.push_back(2);

        } else if (x != 0 && x != 1) { 
            pot.push_back(x);
        } 
    }    
    sort(pot.rbegin(), pot.rend());
    if (1) { 
        for (auto x : pot) { 
            cout << x;
        }
    } 
}