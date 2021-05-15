#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int n, m;
    while(cin >> s >> n, s != "-"){
        for(int i = 0; i < n; i++){
            cin >> m;
            string t = s.substr(0, m);
            s += t;
            s.erase(0, m);
        }

        cout << s << "\n";
    }
}