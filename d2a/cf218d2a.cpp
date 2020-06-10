#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; 
    cin >> n >> k; 
    int a[2*n + 1]; 
    for (int i = 0; i < 2*n + 1; ++i) { 
        cin >> a[i]; 
    }
    for (int i = 1; i < 2*n+1; i+=2) { 
        if ((a[i] - a[i-1] > 1) && a[i] - a[i+1] > 1 && k) { 
            --a[i];
            k -= 1;
        }
    }
    for (int i = 0; i < 2 * n + 1; ++i) { 
        cout << a[i] << " ";
    }
}