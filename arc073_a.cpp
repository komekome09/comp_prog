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
    long n, t, sum = 0;
    cin >> n >> t;
    vector<long> l(n);
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    for(int i = 0; i < n; i++){
        if(i == n-1) sum += t;
        else if(l[i+1] - l[i] > t) sum += t;
        else sum += l[i+1] - l[i];
    }
    cout << sum << endl;
    return 0;
}