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

    int l[100], t;
    fill(l, l, 0);
    for(int i = 0; i < n; i++){
        cin >> t;
        l[i] = t;
    }
    sort(l, l+n, greater<int>());
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(i == 0) cnt++;
        else if(i != 0 && l[i] < l[i-1]) cnt++;
    }

    cout << cnt << endl;
    return 0;
}