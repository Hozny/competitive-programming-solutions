#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int a, b; 
    for (int i = 0; i < n; ++i) { 
        int ans = 0; 
        cin >> a >> b; 
        ans = (a+b)/3;
        cout << min(a, min(b, ans)) << endl;
    }
}