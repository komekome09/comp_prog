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

    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    int cnt = 0, prev = h[0], max = -1;
    for(int i = 1; i < n; i++){
        if(h[i] > prev){
            cnt = 0;
        }else{
            cnt++;
        }
        max = std::max(max, cnt);
        prev = h[i];
    }
    if(max == -1) cout << 0 << endl;
    else cout << max << endl;
    return 0;
}