#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k, A, B; 
    cin >> n; 
    long double x[n]; 
    for (int i = 0; i < n; ++i) 
        cin >> x[i];
    cin >> m;  
    long double y[m];
    for (int i = 0; i < m; ++i) 
        cin >> y[i];
    cin >> k;
    long double z[k];
    for (int i = 0; i < k; ++i) 
        cin >> z[i];
    cin >> A >> B;
    sort(x, x+n);
    sort(y, y+m);
    sort(z, z+k);
    long double ans = sqrt( (B * x[n-1]*x[n-1] * y[0]) / (A*z[0] + y[0]*B));
    for (int i = 0; i < m; ++i) { 
        if (sqrt( (B * x[n-1]*x[n-1] * y[i]) / (A*z[0] + y[i]*B)) > ans) { 
            ans = sqrt((B * x[n-1]*x[n-1] * y[i]) / (A*z[0] + y[i]*B));
        }
    }
    cout << setprecision(10) <<  ans;
}