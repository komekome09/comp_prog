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
    long n, l, o = 0, mm = 0;
    cin >> n;
    long m[1000002] = {0};
    for(int i = 0; i < n; i++){
        cin >> l;
        if(l != 0) m[l-1]++;
        m[l+1]++;
        m[l]++;
        mm = max(mm, l);
    }
    for(int i = 0; i < mm+2; i++){
        o = max(o, m[i]);
    }
    cout << o << endl;
    return 0;
}