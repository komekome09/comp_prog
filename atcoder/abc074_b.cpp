#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

const double PI=acos(-1);

int main(){
    int n, k, l[100] = {0}, sum = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> l[i];
        if(l[i] < k - l[i]) sum += l[i]*2;
        else if(l[i] > k - l[i]) sum += (k - l[i])*2;
        else if(l[i] == k-l[i]) sum += l[i]*2;
    }

    cout << sum << endl;
    return 0;
}