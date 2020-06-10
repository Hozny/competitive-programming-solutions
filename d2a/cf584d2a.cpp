#include <bits/stdc++.h> 

using namespace std; 
int n; 

int main() {
    int n, t; 
    cin >> n >> t; 
    if (t == 10 && n <= 1) { 
        cout << -1;
    } else { 
        if (t == 10) { 
            t /= 10; 
        }
        cout << t;
        for (int i = 0; i < n - 1; ++i) { 
            cout << 0;
        }
    }
}
