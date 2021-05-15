#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <numeric>
using namespace std;

const double PI=acos(-1);

int main(){
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool z = true;
    for(int i = 0; i < s.length(); i++){
        if(i == a){
            if(s[i] != '-'){
                z = false;
                break;
            }
        }else{
            if(s[i] == '-'){
                z = false;
                break;
            }
        }
    }

    if(z) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}