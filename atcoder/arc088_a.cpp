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
    long x, y, a, cnt = 1;
    cin >> x >> y;
    a = x;
    while(a < y){
        a *= 2;
        if(a <= y) cnt++;
    }
    cout << cnt << endl;
    return 0;
}