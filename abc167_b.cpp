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
    long a, b, c, k;
    cin >> a >> b >> c >> k;
    if(a >= k){
        if(a >= k) cout << k << endl;
        else cout << a << endl;
    } 
    else if(a + b >= k) cout << a << endl;
    else {
        long minus = k-a-b, ans = a - minus;
        cout << ans << endl;
    }
    return 0;
}