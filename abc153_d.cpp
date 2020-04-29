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
    long h ;
    cin >> h;

    if(h == 1) cout << 1 << endl;
    else{
        long a = h;
        long cnt = 0, sum = 0;;
        while(a != 0){
            a/=2;
            sum += pow(2, cnt);
            cnt++;
        }
        cout << sum << endl;
    }
    return 0;
}