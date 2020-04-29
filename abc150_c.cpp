#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;

const double PI=acos(-1);

int main(){
    int n;
    cin >> n;

    vector<int> p(n), q(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < n; i++){
        cin >> q[i];
    }
    int pp = 0, qq = 0;
    for(int i = 0; i < n; i++){
        if(i!=0){
            for(int j = i; j < n; j++){
                if(p[j] > p[i-1]) p[j]--;
                if(q[j] > q[i-1]) q[j]--;
            }
        }
        if(n-1 == i) break;
        int a = 1;
        for(int j = 1, k = 1; j <= n-i-1; j++, k++){
            a *= k;
        }
        pp += (p[i] - 1)*a;
        qq += (q[i] - 1)*a;
    }
    cout << abs(pp - qq) << endl;
    return 0;
}