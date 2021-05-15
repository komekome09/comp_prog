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

    vector<bool> l(1000, false);
    for(int i = 1; i < 35; i++){
        for(int j = 2; j < 11; j++){
            if(pow(i,j) > 1000) continue;
            l[(int)pow(i,j)] = true;
        }
    }
    for(int i = x; i > 0; i--){
        if(l[i]){
            cout << i << endl;
            break;
        }
    }
    return 0;
}