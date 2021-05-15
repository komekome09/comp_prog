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
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> a(n, 0);
    int b;
    for(int i = 0; i < q; i++){
        cin >> b;
        a[b-1]++;
    }
    for(int i = 0; i < n; i++){
        if(k - q + a[i] <= 0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}