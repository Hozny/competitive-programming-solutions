#include <bits/stdc++.h>

using namespace std;

int main() {
    string a; 
    cin >> a; 
    vector<int> v;
    for (int i = 0; i < a.size(); ++i) { 
        if (i+3 <a.size()) 
            if (a[i] == 'b' && a[i+1] == 'e' && a[i+2] == 'a' && a[i+3] == 'r') 
                v.push_back(i+1);
    }
    long long sum = 0;
    for (int i = 0; i < v.size(); ++i) { 
        int r = a.size() - v[i]-2;
        int l = 1;
        if (i > 0)
            l = v[i-1]+1;
        l = v[i] - l + 1;
        sum += r*l;
    }
    cout << sum;
}