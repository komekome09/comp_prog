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
    string s;
    cin >> s;

    bool a[26] = {false}, z = true;
    for(int i = 0; i < s.length(); i++){
        if(a[s[i]-'a']){
            z = false;
            break;
        }else{
            a[s[i]-'a'] = true;
        }
    }
    if(z) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}