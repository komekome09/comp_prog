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
    
    vector<int> p(n);
    int min = 99999999, cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        min = std::min(min, p[i]);
        if(min == p[i]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}