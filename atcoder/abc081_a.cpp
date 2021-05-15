#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
using namespace std;

const double PI=acos(-1);

int main(){
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1') c++;
    }
    cout << c << endl;
    return 0;
}