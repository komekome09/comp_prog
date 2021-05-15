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
    int n;
    cin >> n;
    long ans = 1;
    for(int i = 1; i <= n; i++){
        ans = (ans * i) % 1000000007;
    }
    cout << ans << endl;

    return 0;
}