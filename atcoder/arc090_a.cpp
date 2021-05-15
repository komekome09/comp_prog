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
using namespace std;

const double PI=acos(-1);

int main(){
    int n;
    cin >> n;
    vector<int> l1(n), l2(n);
    for(int i = 0; i < n; i++){
        cin >> l1[i];
        if(i != 0){
            l1[i] += l1[i-1];
        }
    }
    for(int i = 0; i < n; i++){
        cin >> l2[i];
        if(i == 0) l2[i] += l1[i];
        else l2[i] += max(l2[i-1], l1[i]);
    }

    cout << l2[n-1] << endl;
    return 0;
}