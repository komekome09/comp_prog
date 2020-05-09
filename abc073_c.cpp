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
    long n, a, cnt = 0;
    cin >> n;
    map<long, long> l;
    for(int i = 0; i < n; i++){
        cin >> a;
        l[a]++;
    }
    for(auto i : l){
        if(i.second%2 == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}