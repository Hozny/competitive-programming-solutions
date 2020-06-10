#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x; 
    map<int,int> m; 
    cin >> n; 
    for (int i = 0; i < n; ++i){ 
        cin >> x; 
        m[x] = i; 
    }
    map<int,int> a;
    for (int i = 0; i < n; ++i) {
       cin >> x; 
       if (i > m[x]) { 
           a[(n-i-1)+(m[x]+1)] +=1;
       } else {
           a[ m[x] - i ] += 1; 
       }
    }
    int ans = -1;
    for (auto l : a) { 
        if (l.second > ans) { 
            ans = l.second;
        }
    }
    cout << ans;
}