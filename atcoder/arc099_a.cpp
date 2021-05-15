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
    vector<long> ll, lr;
    bool z = false;
    for(long i = 0; i < n; i++){
        long a;
        cin >> a;
        if(z) lr.push_back(a);
        else ll.push_back(a);
        if(a == 1){
            lr.push_back(a);
            ll.push_back(a);
            z = true;
        }
    }
    if(n == k) cout << "1" << endl;
    else cout << ceil((n-1)/(double)(k-1)) << endl;
    return 0;
}