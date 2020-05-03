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
    int d, n;
    cin >> d >> n;

    if(d == 0){
        if(n == 100) cout << n+1 << endl;
        else cout << n << endl;
    }
    else if(d == 1){
        if(n == 100) cout << n * 101 << endl;
        else cout << n * 100 << endl;
    }
    else{
        if(n == 100) cout << n * 10100 << endl;
        else cout << n * 10000 << endl;
    }
    return 0;
}