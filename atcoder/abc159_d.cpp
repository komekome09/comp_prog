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
    map<long, long> l, o;
    vector<long> m(n);
    for(long i = 0; i < n; i++){
        cin >> m[i];
        l[m[i]]++;
    }
    for(auto i : l){
        o[i.first] = i.second*(i.second-1)/2;
        sum += o[i.first];
    }
    long summ = sum;
    for(int i = 0; i < n; i++){
        sum = summ;
        sum -= o[m[i]];
        long a = (l[m[i]]-1)*(l[m[i]]-2)/2;
        if(a > 0) sum += a;
        cout << sum << endl;
    }
    return 0;
}