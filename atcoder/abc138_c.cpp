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
    int n;
    cin >> n;

    vector<int> l(n);
    double ans = 0;
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    sort(l.begin(), l.end());
    for(int i = 0; i < n; i++){
        if(i > 1) ans += pow(2,i-1)*l[i];
        else ans += l[i];
    }
    ans /= pow(2, n-1);
    printf("%.5f\n", ans);
    return 0;
}