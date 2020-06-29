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
   while(t--) { 
       int n; 
       cin >> n; 
       int a[n];
       long long int sum = 0; 
       for (int i = 0; i < n; ++i) { 
           cin>>a[i];
           if (i%2==0)
            sum+=a[i];
       }
       long long int msf = 0;
       long long int lm = 0;
       for (int i = 0; i < n-1; i+=2) { 
           lm = max((long long) 0, lm - a[i] + a[i+1]);
           msf = max(lm, msf);
       }
       long long int lm2 = 0;
       for (int i = 1; i < n-1; i+=2) { 
           lm2 = max((long long) 0, lm2 + a[i] - a[i+1]);
           msf = max(lm2, msf);
       }  
       cout << sum + msf << endl;
   } 
}