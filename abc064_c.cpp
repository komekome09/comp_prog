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
    long n, mi = 0, ma = 0, tc = 0;
    cin >> n;
    vector<long> l(n);
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    vector<int> c(8, 0);
    for(int i = 0; i < n; i++){
        if(1 <= l[i] && l[i] <= 399) c[0] = 1;
        else if(400 <= l[i] && l[i] <= 799) c[1] = 1;
        else if(800 <= l[i] && l[i] <= 1199) c[2] = 1;
        else if(1200 <= l[i] && l[i] <= 1599) c[3] = 1;
        else if(1600 <= l[i] && l[i] <= 1999) c[4] = 1;
        else if(2000 <= l[i] && l[i] <= 2399) c[5] = 1;
        else if(2400 <= l[i] && l[i] <= 2799) c[6] = 1;
        else if(2800 <= l[i] && l[i] <= 3199) c[7] = 1;
        else tc++;
    }
    long sum = accumulate(c.begin(), c.end(), 0);
    mi = ma = sum;
    if(mi == 0 && tc != 0) mi++;
    if(tc != 0) ma += tc;
    cout << mi << " " << ma << endl;
    return 0;
}