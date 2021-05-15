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
    long n, m, x;
    cin >> n >> m >> x;
    vector<vector<long>> l(n, vector<long>(m+1));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m+1; j++){
            cin >> l[i][j];
        }
    }
    long mm = 99999999999999;
    for(int i = 0; i < pow(2, n); i++){
        long price = 0;
        bool z = true;
        vector<long> sum(m+1, 0);
        for(int j = 0; j < n; j++){
            if(!((i >> j) & 0x01)) continue;
            price += l[j][0];            
            for(int o = 1; o < m+1; o++){
                sum[o] += l[j][o];
            }
        }
        for(int o = 1; o < m+1; o++){
            if(sum[o] < x) z = false;
        }
        if(z){
            mm = min(mm, price);
        }
    }
    if(mm == 99999999999999) cout << "-1" << endl;
    else cout << mm << endl;
    return 0;
}