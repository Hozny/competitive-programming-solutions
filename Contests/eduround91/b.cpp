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
    int t; 
    cin >> t; 
    while (t--) { 
        string in; 
        cin >> in;
        int R, S, P;
        R = S = P = 0;
        for (int i = 0; i < in.size(); ++i) { 
            if (in[i] == 'R') 
                ++R;
            if (in[i] == 'S')
                ++S;
            if (in[i] == 'P')
                ++P;
        }
        char c;
        if (S == max(R,max(S,P))) { 
            c = 'R';
        } else if (R == max(R, max(S, P))) { 
            c = 'P';
        } else { 
            c = 'S';
        }
        for (int i = 0; i < in.size(); ++i) { 
            cout << c;
        }cout << endl;
    }
}