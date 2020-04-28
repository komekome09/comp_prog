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
    int s;
    cin >> s;

    vector<int> l(1000000);
    bool a = false;
    for(int i = 0; i < 1000000; i++){
        if(i == 0) l[i] = s;
        else if(l[i-1]%2 == 0) l[i] = l[i-1]/2;
        else l[i] = l[i-1]*3+1;
        for(int j = 0; j < i; j++){
            if(l[j] == l[i]){
                cout << i+1 << endl;
                a = true;
                break;
            }
        }
        if(a) break;
    }
    return 0;
}