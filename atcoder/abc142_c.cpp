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
    int n;
    cin >> n;

    vector<int> l(n), ans(n);
    for(int i = 0; i < n; i++){
        cin >> l[i];
        ans[l[i]-1] = i+1;
    }
    for(int i = 0; i < n; i++){
        cout << ans[i];
        if(i != n-1) cout << " ";
    }
    cout << endl;
    return 0;
}