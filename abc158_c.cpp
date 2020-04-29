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
using namespace std;

const double PI=acos(-1);

int main(){
    int a, b;
    cin >> a >> b;

    bool z = true;
    for(int i = 1; i < 1500; i++){
        if(floor(i*0.08) == a && floor(i*0.10) == b){
            z = false;
            cout << i << endl;
            break;
        }
    }
    if(z) cout << "-1" << endl;
    return 0;
}