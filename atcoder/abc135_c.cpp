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
    long n, sum = 0;
    cin >> n;
    vector<long> a(n+1), b(n);
    for(int i = 0; i < n+1; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++){
        sum += min(a[i]+a[i+1], b[i]);
        if(a[i] < b[i]){
            a[i+1] -= b[i] - a[i];
            if(a[i+1] < 0) a[i+1] = 0;
        }
    }
    cout << sum << endl;
    return 0;
}