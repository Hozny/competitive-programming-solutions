#include <bits/stdc++.h> 

using namespace std; 
int n; 

int main() {
    cin >> n; 
    int a[n] = {0};
    int b[n] = {0}; 
    int c[n] = {0}; 
    string rated = "";
    for (int i = 0; i < n; ++i) { 
        cin >> a[i] >> b[i]; 
        c[i] = b[i];
        if (a[i] != b[i]) { 
            rated = "rated";
        }
    }
    sort(b, b+n, greater<int>()); 
    for (int i =0; i < n; ++i) { 
        if (b[i] != c[i] && rated == "") { 
            rated = "unrated"; 
        }
    }
    if (rated == "") { 
        rated = "maybe";
    } 
    cout << rated;
}  