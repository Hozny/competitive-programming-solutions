#include <bits/stdc++.h> 

using namespace std; 

int main () { 
    string s, n; 
    cin >> s;
    bool wub = true;
    for (int i = 0; i < s.size(); ++i) { 
        if (i < s.size() - 2 && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') { 
            if (!wub) { 
               n += " "; 
            }
            i += 2;
            wub = true;
        } else { 
            n += s[i];
            wub = false;
        }
    } 
    cout << n;
}
