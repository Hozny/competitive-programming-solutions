#include <bits/stdc++.h> 

using namespace std; 
string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";

char fd(char c, int a) { 
    for(int i = 0; i < kb.length(); ++i) { 
        if (kb[i] == c) { 
            return kb[i + a];
        }
    }
}
int main(void) { 
    int a = 1; 
    char t; 
    string in; 
    cin >> t >> in;  
    if (t == 'R')  
        a = -1; 
    for (int i = 0; i < in.length(); ++i) { 
        cout << fd(in[i], a); 
    }
}