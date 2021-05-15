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
    int n, m, x;
    cin >> n >> m >> x;

    vector<int> l(m);
    for(int i = 0; i < m; i++){
        cin >> l[i];
    }
    int left = 0, right = 0;
    for(int i = 0; i < m; i++){
        if(l[i] < x) left++;
        else right++;
    }

    cout << min(left, right) << endl;
    return 0;
}