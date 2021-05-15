#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;

const double PI=acos(-1);

int main(){
    long n, k;
    cin >> n >> k;

    long a = n - k*(n/k);
    while(a > abs(a - k)){
        a = abs(a-k);
    }
    cout << a  << endl;
    return 0;
}