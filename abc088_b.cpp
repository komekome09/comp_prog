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

    int a = 0, b = 0, t;
    int l[100];
    fill(l, l, 0);
    for(int i = 0; i < n; i++){
        cin >> t;
        l[i] = t;
    }
    sort(l, l+n, greater<int>());
    for(int i = 0; i < n; i++){
        if(i%2 == 0) a += l[i];
        else b += l[i];
    }
    cout << a-b << endl;
    return 0;
}