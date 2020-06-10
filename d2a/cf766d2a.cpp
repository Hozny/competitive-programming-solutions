#include <bits/stdc++.h> 

using namespace std; 

int main() { 
    string a; 
    string b; 
    cin >> a >> b; 
    if(a.compare(b) == 0) { 
        cout << -1; 
    } else { 
        cout << max(a.length(), b.length()); 
    }
} 

