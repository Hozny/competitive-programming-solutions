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
     while (t--) { 
         long long int a, b, c; 
         cin >> a >> b >> c; 
         if (c <= a) { 
             cout << "-1 " << b;
         } else if (a*b < c) { 
             cout << "1 -1";
         } else if (a*b == c) { 
             cout << "1 -1";
         } else { 
             cout << "1 " << b; 
         }
        cout << endl;
     }
}