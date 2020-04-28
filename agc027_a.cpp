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
    long n, x;
    cin >> n >> x;

    vector<long> l(n, 0);
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }

    if(x > std::accumulate(l.begin(), l.end(), 0L)) cout << n-1 << endl;
    else if(x == std::accumulate(l.begin(), l.end(), 0L)) cout << n << endl;
    else{
        sort(l.begin(), l.end());
        int cnt = 0;
        for(int i = 0; i < n; i++, cnt++){
            x -= l[i];
            if(x < 0){
                cout << cnt << endl;
                break;
            }
        }
    }
    return 0;
}