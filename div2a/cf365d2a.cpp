#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    long long a;
    int ans = 0;
    int d[11] = {0};
    cin >> n >> k;
    for (int i = 0; i < n; ++i) { 
        memset(d, 0, sizeof(int) * 10); 
        cin >> a;
        while (a) { 
            d[a%10] = 1;
            a = a / 10;
        }
        ans += 1;
        for (int j = 0; j <= k; ++j) { 
            if(d[j] == 0) { 
                ans -=1;
                break;
            }
        }
    }
    cout << ans;
}