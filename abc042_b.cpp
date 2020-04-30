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
    int n, l;
    cin >> n >> l;
    vector<string> p(n);;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    for(auto a : p){
        cout << a;
    }
    cout << endl;
    return 0;
}