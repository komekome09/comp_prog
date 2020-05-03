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
    long n;
    cin >> n;

    vector<long> l;
    for(long i = 1; i * i <= n; i++){
        if(n%i == 0){
            l.push_back(i);
            if(i*i != n) l.push_back(n/i);
        }
    }
    long ans = 9999999999999999;
    for(int i = 0; i < l.size(); i++){
        for(int j = 0; j < l.size(); j++){
            if(l[i] * l[j] == n){
                ans = min(ans, l[i] + l[j] - 2);
            }
        }
    }
    cout << ans << endl;
    return 0;
}