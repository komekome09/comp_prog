#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <numeric>
using namespace std;

const double PI=acos(-1);

int main(){
    int n;
    cin >> n;

    int t, x, y, tp = 0, xp = 0, yp = 0;
    bool z = true;
    for(int i = 0; i < n; i++){
        cin >> t >> x >> y;
        t -= tp;
        x = abs(x - xp);
        y = abs(y - yp);
        if(t < x + y){
            z = false;
            break;
        }
        if((t+x+y)%2 == 0 || t == x + y){
            tp = t;
            xp = x;
            yp = y;
            continue;
        }
        
        z = false;
        break;
    }

    if(z) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}