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
    bool z = true;
    for(int i = 0; i < m; i++){
        long a, b;
        cin >> a >> b;
        if(l.count(a) && l[a] != b){
            z = false;
            break;
        }
        l[a] = b;
        if((n != 1 && a == 1 && b == 0) || a > n){
            z = false;
            break;
        }
    }
    long ans = 0;
    long nn[][3] = {{1, 0, 0}, {10, 1, 0}, {100, 10, 1}};
    if(z){
        for(int i = 1; i <= n; i++){
            if(l.count(i)){
                ans += l[i] * nn[n-1][i-1];
            }else{
                if(i == 1) ans += nn[n-1][i - 1];
            }
            
        }
        if(n == 1 && m == 0) ans = 0;
        cout << ans << endl;
    }else cout << "-1" << endl;
    
    return 0;
}