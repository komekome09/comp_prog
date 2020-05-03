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
    long n, cnt = 0;
    cin >> n;
    vector<long long> l(n);
    for(int i = 0; i < n; i ++){
        int t = 0;
        cin >> l[i];
        while(l[i]%2 == 0){
            l[i] /= 2;
            t++;
        }
        cnt += t;
    }
    cout << cnt << endl;
    return 0;
}