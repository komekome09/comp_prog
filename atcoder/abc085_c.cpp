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
    int n, y;
    cin >> n >> y;
    int aa = 0, bb = 0, cc = 0;
    bool z = false;
    for(int b = 0; b <= n; b++){
        for(int c = 0; c <= n; c++){
            if(n - b - c < 0) continue;
            if(y == (10000*n - 5000*b - 9000*c)){
                aa = n-b-c; bb = b; cc = c;
                z = true;
                break;
            }
        }
        if(z) break;
    }

    if(z) cout << aa << " " << bb << " " << cc << endl;
    else cout << "-1 -1 -1" << endl;

    return 0;
}