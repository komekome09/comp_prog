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

    vector<int> t(n);
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    int sum = accumulate(t.begin(), t.end(), 0);

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int p, x;
        cin >> p >> x;
        cout << sum - (t[p-1] - x) << endl;
    }
    return 0;
}