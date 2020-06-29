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
        string in; 
        cin >> in; 
        int count = 0;
        for (int i = 0; in.size() > 0 && i < in.size()-1; ++i) { 
            if (in[i] != in[i+1]) { 
                in.erase(in.begin() + i, in.begin()+i+2);
                ++count;
                i = -1;
            }
        }
        if (count&1)
            cout << "DA" << endl;
        else 
            cout << "NET" << endl;
    }
}