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
    int x;
    cin >> x;
    vector<int> l;
    for(int i = 1; i * i <= x; i++){
        if(x%i == 0){
            l.push_back(i);
            if(i*i != x) l.push_back(x/i);
        }
    }
    sort(l.begin(), l.end());
    bool z = false;
    for(int a = (pow(x, 0.25)-1) * -1; pow(a, 4) <= x; a++){
        for(int b = (pow(x, 0.25)-1) * -1; pow(b, 4) <= x; b++){
            double hoge = pow(a,4) + pow(a,3)*b + pow(a,2)*pow(b,2) + a*pow(b,3) + pow(b,4);
            hoge *= (a-b);
            if(fabs((double)x - hoge) <= DBL_EPSILON){
                cout << a << " " << b << endl;
                z = true;
                break;
            }
        }
        if(z) break;
    }
    return 0;
}