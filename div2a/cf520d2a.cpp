#include <bits/stdc++.h> 

using namespace std; 

int a[26] = {0}; 
int main() { 
    int n; 
    char c; 
    cin >> n;
    for (int i = 0; i < n; ++i) { 
        cin >> c; 
        a[tolower(c) - 'a'] = 1; 
    } 
    for (int i = 0; i < 26; ++i) { 
        if (a[i] == 0) { 
            cout << "NO"; 
            break; 
        } else if (i == 25) { 
            cout << "YES"; 
            break;
        }
    }

} 
