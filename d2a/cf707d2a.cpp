#include <bits/stdc++.h> 

using namespace std; 

int main() { 
    int n, m;
    cin >> n >> m; 
    char c; 
    bool black = true;
    for (int i = 0; i < n; ++i) { 
        for(int j = 0; j < m; ++j){ 
            cin >> c; 
            if (c != 'W' && c != 'G' && c != 'B' && c != ' ') { 
                black = false; 
            }
        }
       
    }
    if (black) { 
        cout << "#Black&White";
    } else { 
        cout << "#Color"; 
    }
}
