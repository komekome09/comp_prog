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
    int n, t, a;
    cin >> n >> t >> a;

    int h, ii = -1;
    double min = 9999999;
    for(int i = 0; i < n; i++){
        cin >> h;
        double b = fabs(a - (t - (double)h * 0.006));
        min = std::min(min, b);
        if(fabs(min - b) < DBL_EPSILON ) ii = i+1;
    }
    cout << ii << endl;
    return 0;
}