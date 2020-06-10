#include <bits/stdc++.h>

using namespace std;

int main() {
    string in[3] = {"", "", ""}; 
    string t;
    for (int i = 0; i < 3; ++i) { 
        cin >> t;
        if (t[1] == '>') { 
            in[i] += t[0]; 
            in[i] += t[2];
        } else { 
            in[i] += t[2];
            in[i] += t[0];
        }
    }
    string ans = "Impossible";
    int x = 0;
    for (int i = 0; i < 3; ++i) { 
        for (int j = 0; j < 3; ++j) { 
            for (int d = 0; d < 3; ++d) {
                if (d != i && d != j) { 
                    x = d;
                }
            } 
            if (i != j && in[i][1] == in[j][0] && in[i][0] == in[x][0] && in[j][1] == in[x][1]) { 
                ans = "";
                ans += in[j][1];
                ans += in[i][1];
                ans += in[i][0];
            }
        }
    }
    cout << ans;
}