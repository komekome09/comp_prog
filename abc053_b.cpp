#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>
#include <set>
using namespace std;

const double PI=acos(-1);

int main(){
    string s;
    int l = 0, r = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A'){
            l = i;
            break;
        }
    }
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] == 'Z'){
            r = i;
            break;
        }
    }
    cout << r - l + 1 << endl;
    return 0;
}