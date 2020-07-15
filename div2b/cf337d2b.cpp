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
ll gcd(ll a, ll b) { 
    if (b > a) swap(a,b);
    while (a > b && b != 0) { 
        a = a % b;
        swap(a, b);
    }
    return a;
}
int main() {
    SPEED;
    ll a,b,c,d;
    cin >> a >> b >> c >> d; 
    ll top, bot;
    if (a < b) { 
        top 
    }
    if (top == 0) { 
        cout << 0; 
    }else
        cout << top/gcd(top,bot)<<"/"<<bot/gcd(top,bot);
}