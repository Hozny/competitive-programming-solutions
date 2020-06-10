#include <bits/stdc++.h>

using namespace std;

int main() {
    string c = "ROYGBIV";
    int n; 
    cin >> n; 
    int t = n;
    while (t > 0) { 
        if (t >= 7) { 
            cout << c;
        }
        t -=7;
    }
    n = n % 7;
    if (n == 1) { 
        cout << "G"; 
    } else if (n == 2) { 
        cout << "YG";
    } else if (n == 3) { 
        cout << "YGI";
    } else if (n == 4) { 
        cout << "RYGI";
    } else if (n == 5) { 
        cout << "RYGIV";
    } else if (n == 6) { 
        cout << "ORYGIV";
    }
    
}