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

    vector<int> a(n, 0), b(n, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    b = a;
    sort(b.begin(), b.end(), greater<int>());
    for(int i = 0; i < n; i++){
        if(a[i] == b[0]) cout << b[1] << endl;
        else cout << b[0] << endl;
    }
    return 0;
}