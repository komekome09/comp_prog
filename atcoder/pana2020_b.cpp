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
    long h, w;
    cin >> h >> w;

    if(w == 1 || h == 1) cout << 1 << endl;
    else{
        long a = w/2+w%2, b = w%2 == 0 ? a*2 : a*2-1, c = b*(h/2), d = h%2*a;
        cout << c+d << endl;    
    }
    
}