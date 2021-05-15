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
    long n, a, b;
    cin >> n >> a >> b;
    long sum = n/(a+b)*a + min(n%(a+b), a);
    cout << sum << endl;
    return 0;
}