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
    long n, m;
    cin >> n >> m;
    long ans = abs(n-2)*abs(m-2);
    cout << ans << endl;
    return 0;
}