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
    string a, b; 
    cin >> a >> b; 
    int one[b.size()+1], zero[b.size()+1];
    one[0] = 0;
    zero[0] = 0;
    for (int i = 1; i <= b.size(); ++i) { 
        one[i] = one[i-1] + (b[i-1] == '1' ? 1 : 0);
        zero[i] = zero[i-1] + (b[i-1] == '0' ? 1 : 0);
    }
    ll ans = 0;


    for (int i = 0; i < a.size(); ++i) { 
        if (a[i] == '1') { 
            ans += zero[b.size()-a.size()+i+1] - zero[i]; 
        } else { 
            ans += one[b.size()-a.size()+i+1] - one[i]; 
        }
    }
    cout << ans << endl; 
    return 0;
    
}
