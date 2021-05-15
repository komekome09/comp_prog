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
    string s, t;
    cin >> s >> t;
    s += s;
    if(s.find(t) == std::string::npos){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}