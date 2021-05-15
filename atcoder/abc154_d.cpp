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
    long n, k;
    cin >> n >> k;
    vector<double> l(n, 0), m(n, 0);
    for(int i = 0; i < n; i++){
        long a;
        cin >> a;
        l[i] = a*(a+1)/2/(double)a;
        if(i == 0) m[i] = l[i];
        else m[i] += l[i] + m[i-1];
    }
    double ans = -1;
    for(int i = 0; i < n-k+1; i++){
        if(i == 0) ans = max(ans, m[k-1]);
        else ans = max(ans, m[i+k-1] - m[i-1]);
    }
    printf("%.6f\n", ans);
    return 0;
}