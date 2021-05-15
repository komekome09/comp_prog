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
    vector<int> l(n);
    vector<bool> m(n, false);
    for(long i = 0; i < n; i++){
        cin >> l[i];
        l[i]--;
    }
    long ans = 0, it = 0;
    while(true){
        m[it] = true;
        if(m[l[it]]){
            cout << "-1" << endl;
            break;
        }
        if(l[it] == 1){
            ans++;
            cout << ans << endl;
            break;
        }
        ans++;
        it = l[it];
    }
    return 0;
}