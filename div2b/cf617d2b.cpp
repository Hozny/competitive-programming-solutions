#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int a[n];
    vector<int> pos; 
    long long curans = 0;
    int lastpos = -1;
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
        if (a[i] == 1) { 
            if (lastpos == -1) { 
                curans = 1;
            } else { 
                curans *= (i - lastpos);
            }
            lastpos = i;
        }
    }
    cout << curans;
}