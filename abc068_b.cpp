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
    int n, max = 0;
    cin >> n;
    for(int i = 1; i < 8; i++){
        if(pow(2, i) > n){
            cout << pow(2, i-1) << endl;
            break;
        }
    }
    return 0;
}