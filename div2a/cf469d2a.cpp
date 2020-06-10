#include <bits/stdc++.h> 

using namespace std; 
int n; 

int main() { 
    cin >> n; 
    int a[n] = {0}; 
    int x, y; 
    cin >> x; 
    for (int i = 0; i < x; ++i) { 
        cin >> y; 
        a[y - 1] = 1; 
    }
    cin >> x;  
    for (int i = 0; i < x; ++i) { 
        cin >> y; 
        a[y - 1] = 1; 
    }
    for (int i = 0; i < n; ++i) { 
        if (a[i] == 0) { 
            cout << "Oh, my keyboard!"; 
            break; 
        } else if (i == n - 1) {  
            cout << "I become the guy.";
        }

    }
}