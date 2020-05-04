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
    string s;
    cin >> s;
    int cnt = 0, zero = 0, one = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0') zero++;
        else one++;
    }
    
    cout << min(zero, one)*2 << endl;
    return 0;
}