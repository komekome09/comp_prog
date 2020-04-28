#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <numeric>
using namespace std;

const double PI=acos(-1);

bool hoge(const long* array, int size){
    for(int i = 0; i < size; i++){
        if(array[i]%2 == 1) return false;
    }
    return true;
}

int main(){
    int n;
    long t;
    cin >> n;
    long a[200];
    fill(a, a, 0);
    for(int i = 0; i < n; i++){
        cin >> t;
        a[i] = t;
    }
    int c = 0;
    while(hoge(a, n)){
        for(int i = 0; i < n; i++){
            a[i] /= 2;
        }
        c++;
    }
    cout << c << endl;
    return 0;
}