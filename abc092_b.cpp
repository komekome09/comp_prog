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
    int n, d, x;
    cin >> n >> d >> x;

    int l, cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> l;
        int day = 1, j = 1;
        while(day <= d){
            day = j*l + 1;
            cnt++;
            j++;
        }
    }
    cout << cnt+x << endl;
    return 0;
}