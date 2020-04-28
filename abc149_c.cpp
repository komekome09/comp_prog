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
    int x;
    cin >> x;

    const int max = 100004;
    int l[max];
    for(int i = 0; i < max; i++){
        l[i] = i;
    }
    for(int i = 0; i < max; i++){
        if(l[i] == -1) continue;
        if(i == 0 || i == 1){
            l[i] = -1;
            continue;
        }
        for(int j = i + 1; j < max; j++){
            if(l[j] == -1) continue;
            if(l[j]%l[i]==0) l[j] = -1;
        }
    }

    for(int i = x; i < max; i++){
        if(l[i] != -1){
            cout << l[i] << endl;
            break;
        }
    }

    return 0;
}