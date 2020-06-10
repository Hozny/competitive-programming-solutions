#include <bits/stdc++.h>

using namespace std;
long long fact(int n) { 
    long long ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans *= i;
    }
    return ans;
}
int main() {
    long double ans; 
    string a; 
    string b; 
    cin >> a >> b; 
    int dest = 0; 
    int num = 0; 
    int pos = 0; 
    for (int i = 0; i < a.size(); ++i) { 
        if (a[i] == '+') { 
            ++dest;
        } else { 
            --dest;
        } 
        if (b[i] == '?') { 
            ++num;
        } else if (b[i] == '+') { 
            ++pos;
        } else { 
            --pos;
        }
    }
    dest = abs(dest - pos);
    int rem = abs(num - dest);
    if (num < dest || rem % 2 != 0) { 
        ans = 0;
    } else {
        ans = ( fact(num) / ((fact(dest + rem/2)) * fact(rem/2)) ) / pow(2, num) ;
    }
    cout << setprecision(10);
    cout << ans; 
}