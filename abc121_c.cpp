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
    long n, m;
    cin >> n >> m;
    map<long, long> l;
    for(int i = 0; i < n; i++){
        long a, b;
        cin >> a >> b;
        l[a] += b;
    }
    long ans = 0, mm = m;
    for(auto i = l.begin(); i != l.end(); i++){
        if(i->second >= mm){
            ans += mm * i->first;
            break;
        }else{
            mm -= i->second;
            ans += i->second * i->first;
        }
    }
    cout << ans << endl;
    return 0;
}