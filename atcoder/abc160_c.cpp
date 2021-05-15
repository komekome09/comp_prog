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
    int k, n, a, aa = 0, a1 = 0, max = 0;
    cin >> k >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(i == 0) a1 = a;
        max = std::max(max, a - aa);
        if(i == n - 1){
            max = std::max(max, k + a1 - a);
        }
        aa = a;
    }
    cout << k - max << endl;
    return 0;
}