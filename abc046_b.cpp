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
    long n, k, ans = 1;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        if(i == 0) ans *= k;
        else ans *= k-1;
    }
    cout << ans << endl;
    return 0;
}