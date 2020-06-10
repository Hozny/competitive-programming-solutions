#include <bits/stdc++.h>

using namespace std;

int main() {
    string in; 
    cin >> in; 
    int ans = 0;
    bool first = false;
    bool second = false;
    for (int i = 0; i < in.size(); ++i) { 
        if(in[i] == '1') { 
            if (first) { 
                second = true;
            } else { 
                ans += in.size() - 1 - i; 
                first = true;
            }
        }
    }
    if (ans == 0) { 
        cout << 0; 
    } else if (second || ans % 2 != 0) { 
        cout << ans / 2 + 1;
    } else { 
        cout << ans / 2;
    } 
}