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
    string in; 
    cin >> in; 

    int a[(int) in.size()] = {0};
    int b[(int) in.size()] = {0};
    map<int,int> cur; 
    int qc = 0;
    for (int i = 0; i < in.size(); ++i) { 
        if (in[i] != '?')
            cur[in[i]] += 1; 
        else 
            ++qc;
        if (i >= 26) { 
            if (in[i-26] != '?') {
                if (cur.count(in[i-26]) && cur[in[i-26]] > 0)
                    cur[in[i-26]] -= 1;
            }
            else 
                --qc;
        }
        int s = 0;
        for (auto x : cur) { 
            if (x.second)
                ++s;
        }
        b[i] = qc;
        a[i] = s;
    }
    // for (int i = 0; i < in.size(); ++i) { 
    //     cout << a[i] << " ";
    // } cout << endl;
    // for (int i = 0; i < in.size(); ++i) { 
    //     cout << b[i] << " ";
    // } cout << endl;

    int p = -1;
    for (int i = 0; i < in.size(); ++i) { 
        if (a[i] + b[i] >= 26) 
            p = i;
    }
    if (p > 0) { 
        string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        cur.clear();
        set<int> d;
        for (int i = p; i > p-26; --i) { 
            if (in[i] != '?')
                d.insert(in[i]);
        }   
        for (int i = p; i > p-26; --i) { 
            if (in[i] == '?') { 
                for (int j = 0; j < 26; ++j) { 
                    if (d.count(alph[j]) == 0) { 
                        d.insert(alph[j]);
                        in[i] = alph[j];
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < in.size(); ++i) { 
            if (in[i] == '?')
                in[i] = 'A';
        }
        cout << in;
    } else { 
        cout << p;
    }
    

}