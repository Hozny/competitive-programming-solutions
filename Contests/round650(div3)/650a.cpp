#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    string in; 
    for (int i = 0; i < t; ++i) { 
        cin >> in; 
        string ans = "";
        for (int j = 0; j < in.size(); ++j) { 
            if (j == 0 || j==in.size()-1){
                ans+=in[j];
            } else { 
                if(j%2!=0) { 
                    ans+=in[j];
                }
            }
        }
        cout << ans << endl;
    } 
}