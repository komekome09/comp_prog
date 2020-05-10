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

long gcd(long a, long b){
    if(b > a){
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    while(b != 0){
        long t = b;
        b = a%b;
        a = t;
    }
    return a;
}

int main(){
    long a, b, c, d;
    cin >> a >> b >> c >> d;
    long abc = b/c - (a-1)/c, abd = b/d - (a-1)/d;
    long g = c/(double)gcd(c, d)*d, abg = b/g - (a-1)/g;
    cout << b - a + 1 - abc - abd + abg << endl;
    return 0;
}