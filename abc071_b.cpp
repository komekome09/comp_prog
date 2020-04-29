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
        a[s[i]-'a'] = true;
    }
    for(int i = 0; i < 26; i++){
        if(!a[i]){
            z = false;
            printf("%c\n", 'a'+i);
            break;
        }
    }
    if(z) cout << "None" << endl;
    return 0;
}