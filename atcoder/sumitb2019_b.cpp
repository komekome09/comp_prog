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
    int n;
    cin >> n;

    int np = floor((double)n / 1.08);
    bool z = true;
    for(int i = np - 10; i <= np + 10; i++){
        if(floor(i*1.08) == n){
            cout << i << endl;
            z = false;
            break;
        }
    }
    if(z) cout << ":(" << endl;

    return 0;
}