#include <iostream>
#include<climits>
#include<iomanip>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>

using namespace std; 

using namespace std;

int main() {
    int t; 
    cin >> t; 
    int n;
    while (t--) { 
        cin >> n; 
        long long int a = (n-2)*180;
        a = 180-a/n;
        if (n%4==0)   
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}