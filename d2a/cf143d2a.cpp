#include <bits/stdc++.h>

using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2; 
    bool found = false; 
    int a[2][2] = { {0, 0} , {0, 0} };
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2; 
    for (int i = 1; i <= 9; ++i) { 
        a[0][0] = i; 
        a[0][1] = max(1, min(r1 - a[0][0], 9)); 
        a[1][0] = max(1, min(c1 - a[0][0], 9)); 
        a[1][1] = max(1, min(d1 - a[0][0], 9)); 
        if (a[1][0] + a[1][1] == r2 && a[0][1] + a[1][1] == c2 && a[1][0] + a[0][1] == d2) { 
            if ((a[0][0] != a[0][1]) && (a[0][0] != a[1][0]) && (a[0][0] != a[1][1]) && (a[1][0] != a[1][1]) && (a[1][0] != a[0][1]) && (a[0][1] != a[1][1])) { 
                found = true; 
                break;
            }
        }
    }
    if (found) { 
        cout << a[0][0] << " " << a[0][1] << "\n" << a[1][0] << " " << a[1][1];
    } else { 
        cout << -1;
    }
}
   