#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    int s = 1;
    string in; 
    cin >> n >> in; 
    for (int i = n - 2; i >= 0; i-=2) { 
        cout << in[i];
        s = i;
    }
    s = 1 - s;
    for (int i = s; i < n; i+=2) { 
        cout << in[i];
    }
}