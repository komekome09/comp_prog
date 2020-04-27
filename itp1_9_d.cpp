#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;
    
    string a, d;
    int b, c;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        int l = c - b + 1 ;
        if(a == "replace"){
            cin >> d;
            s.replace(b, l, d);
        }else if(a == "reverse"){
            string z = s.substr(b, l);
            reverse(z.begin(), z.end());
            s.replace(b, l, z);
        }else if(a == "print"){
            cout << s.substr(b, l) << "\n";
        }
    }
    return 0;
}