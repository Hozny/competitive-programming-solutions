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
    string in; 
    cin >> in;
    string ones = "";
    string left = "";
    string right = "";
    int ft = -1;
    for(int i = 0; i < in.size(); ++i) { 
        if (in[i] == '1') { 
            ones += '1';
        } else { 
            if (in[i] == '2' && ft == -1) { 
                ft = i;
            }
            if (ft == -1) { 
                left += in[i];
            } else { 
                right += in[i];
            }
        }
    } 
    cout << left << ones << right;
}