#include <bits/stdc++.h>

using namespace std;

string n; 
int s(string n) { 
    int sum = 0; 
    int c = 0; 
    for (int i = 0; i < n.size(); ++i) { 
        sum += n[i] - '0';
    }
    if (n.size() > 1) { 
        c += 1;
    }
    int t;
    while (sum >= 10) { 
        t = sum;
        sum = 0;
        while (t) { 
            sum += t % 10; 
            t = t / 10;
        }
        c += 1;
    }
    return c;
}
int main() {
    cin >> n; 
    cout << s(n);
}