#include <bits/stdc++.h>

using namespace std;

int main() {
    string in, a;
    string n[2] = {"", ""};
    cin >> in >> a; 
    int c = 0;  
    for (int i = 0; i < in.size(); ++i) { 
        if (in[i] == '|') { 
            c += 1; 
        } else { 
            n[c] += in[i];
        }
    }
    for (int i = 0; i < a.size(); ++i) { 
        if (n[0].size() < n[1].size()) { 
            n[0] += a[i];
        } else { 
            n[1] += a[i];
        }
    }
    if (n[0].size() != n[1].size()) { 
        cout << "Impossible";
    } else { 
        cout << n[0] << "|" << n[1];
    }

    
}