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
    cin >> s;
    int cnt = 0;
    char prev = ' ';
    for(int i = 0; i < s.length(); i++){
        if(i == 0){
            prev = s[i];
            continue;
        }
        if(s[i] == prev){
            cnt++;
            if(prev == '0') prev = '1';
            else prev = '0';
        }else{
            prev = s[i];
        }
    }
    cout << cnt << endl;
    return 0;
}