#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int a[n]; 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
    }
    int l = -1; 
    int r = -1;
    for (int i = 0; i < n; ++i) { 
        if (a[i] != i + 1) { 
            l = i; 
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i) { 
        if (a[i] != i + 1) { 
            r = i; 
            break;
        }
    }
    string ans = "yes";
    if (l != -1) { 
        bool greater = true;
        bool smaller = true;
        for (int i = l + 1; i <=r; ++i) { 
            if (a[i] > a[i-1]) { 
                greater = false; 
            }
            if (a[i] < a[i-1]) { 
                smaller = false; 
            }
        }
        if (!(greater || smaller)) { 
            cout << "no";
        } else { 
            cout << "yes" << endl << l + 1 << " " << r + 1;
        }
    } else { 
        cout << "yes" << endl << 1 << " " << 1;
    }
    
}