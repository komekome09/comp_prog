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
    int n;
    long l[87];
    cin >> n;

    l[0] = 2; l[1] = 1;
    for(int i = 2; i < 87; i++){
        l[i] = l[i-1] + l[i-2];
    }

    cout << l[n] << endl;
    
    return 0;
}