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
char opp(char c) { 
    if (c >= 'a' && c <= 'z') return c - 'a' + 'A';
    return c - 'A' + 'a';
}
int main() {
    SPEED;
    string s, t; 
    cin >> s >> t; 
    map<char, int> mt;  
    for (int i = 0; i < t.size(); ++i) mt[t[i]]++; 
    int l = 0, r = 0;
    int got[s.size()] = {0};
    for (int i = 0; i < s.size(); ++i) { 
        if (mt[s[i]] > 0) { 
            ++l; 
            mt[s[i]]--;
            got[i] = 1;
        } 
    }
    for (int i =0 ; i < s.size(); ++i) { 
        if (mt[opp(s[i])] > 0 && !got[i]) { 
            ++r; 
            mt[opp(s[i])]--;
        }
    }
    cout << l << " " << r;
}