#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    char f[n+1];
    f[0] = '.';
    int s = 0; 
    int e = n; 
    int l = n;
    for (int i = 1; i <= n; ++i) { 
        cin >> f[i];
        if (f[i] == 'R' && f[i-1] == '.') { 
            s = i;
        } 
        if (f[i] == 'L' && (f[i-1] == 'R' || f[i-1] == '.')) { 
            e = i;
        }
        if (f[i] == '.' && f[i-1] != '.') { 
            l = i;
        }
    }
    if (s == 0) { // .ll..
        cout << l - 1 << " " << e - 1; 
    } else if (e == n) { // .RR..
        cout << s << " " << l;
    } else { 
        cout << s << " " << e - 1;
    }
}