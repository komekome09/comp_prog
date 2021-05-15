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
    long c[3][3], sum = 0, b21[3] = {0}, b32[3] = {0};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> c[i][j];
            sum += c[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        b21[i] = c[i][1] - c[i][0];
        b32[i] = c[i][2] - c[i][1];
    }
    if(sum%3 == 0) {
        if(b21[0] == b21[1] && b21[0] == b21[2] && b32[0] == b32[1] && b32[0] == b32[2])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }else cout << "No" << endl;
    return 0;
}