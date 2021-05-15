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

    string s;
    int p;
    vector<tuple<string, int, int>> l;
    for(int i = 0; i < n; i++){
        cin >> s >> p;
        l.emplace_back(s, p, i+1);
    }
    sort(l.begin(), l.end(), [](tuple<string, int, int> const& el, tuple<string, int, int> const& er){
        if(get<0>(el) != get<0>(er)) return get<0>(el) < get<0>(er);
        else return get<1>(el) > get<1>(er);
    });
    for(auto a : l){
        cout << get<2>(a) << endl;
    }
    
    return 0;
}