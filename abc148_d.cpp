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
    int n, cnt = 0, t = 1, a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == t) t++;
        else cnt++;
    }
    if(cnt == n) cout << "-1" << endl;
    else cout << cnt << endl;
    return 0;
}