#include <bits/stdc++.h> 

using namespace std; 

int n; 
int main() { 
    cin >> n; 
    int has[100001] = {0}; 
    int a[n]; 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i]; 
    }
    int l = n; 
    for (int i = 0; i < n; ++i) { 
        if (a[i] == l) {
            has[a[i]] = 1; 
            for(int i = l; i >= 0; --i) { 
                if (has[i] == 1) { 
                    cout << i << " "; 
                } else {
                    l = i; 
                    break;
                }
            }
            cout << endl; 
        } else { 
            has[a[i]] = 1; 
            cout << endl; 
        }
    }
} 


