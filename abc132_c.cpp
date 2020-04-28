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

    vector<int> l(n, 0);
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    sort(l.begin(), l.end());
    int lm = l[n/2-1], um = l[n/2], ans = um - (lm + 1) + 1;
    if(ans < 0) ans = 0;

    cout << ans << endl;
    return 0;
}