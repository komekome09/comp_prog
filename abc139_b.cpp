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
    int a, b, c = 1, d = 0;
    cin >> a >> b;

    while(c < b){
        c += a-1;
        d++;
    }
    
    cout << d << endl;
    return 0;
}