#include <bits/stdc++.h>
 
using namespace std;
int mem[100*100*100 + 1] = {0};
 
 
int divs(int num) { 
    if (mem[num] != 0)
        return mem[num];
    int ans = 0;
    for (int i = 1; i*i <= num; ++i) { 
        if (num%i==0) { 
            if (i*i!=num) ++ans;
            ++ans;
        }
    }
    mem[num] = ans;
    return ans;
    
}
int main() {
    int a, b, c; 
    cin >> a >> b >> c; 
    for (int i = 0; i < 100*100*100+2; ++i) { 
        mem[i] = 0;
    }
    int ans = 0;
    int mod = 1073741824;
    for (int i = 1; i <= a; ++i) { 
        for (int j = 1; j <= b; ++j ) { 
            for (int k = 1; k <= c; ++k) { 
                int prod = i*j*k;
                ans += divs(prod);
                ans = ans % mod;
                // cout << ans << endl;
            }
        }
    }
    cout << ans;
}