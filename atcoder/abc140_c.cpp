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
using namespace std;

const double PI=acos(-1);

int main(){
    int n;
    cin >> n;

    vector<long> b(n-1);
    long sum = 0;
    for(int i = 0; i < n-1; i++){
        cin >> b[i];
    }
    sum += b[n-2];
    for(int i = n-2; i >= 0; i--){
        if(i == 0) sum += b[0];
        else sum += min(b[i], b[i-1]);
    }
    cout << sum << endl;
    return 0;
}