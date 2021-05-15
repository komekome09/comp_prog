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
    int n, m;
    cin >> n >> m;
    vector<int> l(m), r(m);
    for(int i = 0; i < m; i++){
        cin >> l[i] >> r[i];
    }
    int min = l[0], max = r[0];
    bool z= true;
    for(int i = 1; i < m; i++){
        min = std::max(min, l[i]);
        max = std::min(max, r[i]);
        if(min > max){
            z = false;
            break;
        }
    }
    if(z) cout << max - min + 1 << endl;
    else cout << 0 << endl;
    return 0;
}