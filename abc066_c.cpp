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
    for(int i = s.length() - 2; i >= 0; i-=2){
        string s1 = s.substr(0, i/2), s2 = s.substr(i/2, i/2);
        if(s1 == s2){
            cout << i << endl;
            break;
        }
    }
    return 0;
}