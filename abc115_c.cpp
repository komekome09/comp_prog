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
#include <map>
#include <queue>
using namespace std;

const double PI=acos(-1);

int main(){
    int n, k, h;
    cin >> n >> k;
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        cin >> h;
        p[i] = h;
    }
    
    sort(p.begin(), p.end());
    int m = 999999999;
    for(int i = 0; i+k-1 < n; i++){
        m = min(m, p[i+k-1]-p[i]);
    }
    cout << m << endl;
    return 0;
}