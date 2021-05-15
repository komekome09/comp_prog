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
    int min = 9999;
    for(int i = 0; i < s.length()-2; i++){
        int sum = (s[i]-'0')*100 + (s[i+1]-'0')*10 + (s[i+2]-'0');
        min = std::min(min, abs(753-sum));
    }
    cout << min << endl;
    return 0;
}