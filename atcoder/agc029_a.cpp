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
    long cnt = 0, wcnt = 0;
    for(long i = 0; i < s.length(); i++){
        if(s[i] == 'W'){
            cnt += i - wcnt;
            wcnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}