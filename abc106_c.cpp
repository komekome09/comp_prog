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
#include <map>
using namespace std;

const double PI=acos(-1);

int main(){
    string s, ans = "";
    long k;
    cin >> s >> k;
    for(int i = 0; i < s.length(); i++){
        if(k-1 == i){
            ans = s[i];
            break;
        }
        if(s[i] == '1') continue;
        else{
            ans = s[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}