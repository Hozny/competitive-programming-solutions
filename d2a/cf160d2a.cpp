#include <bits/stdc++.h> 

using namespace std; 

int main() { 
    int n;
    int a[100001];  
    int s = 0;
    int c = 0;  

    cin >> n; 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i]; 
        s += a[i]; 
    } 
    sort(a, a + n, greater<int>()); 
    for (int i = 0; i < n; ++i) { 
        c += a[i]; 
        if (c > s / 2) { 
            cout << i + 1; 
            break;
        } 
    } 
}
