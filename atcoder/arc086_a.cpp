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
    long n, k;
    cin >> n >> k;
    map<long, long> l;
    for(int i = 0; i < n; i++){
        long a;
        cin >> a;
        l[a]++;
    }
    vector<pair<long,long>> m;
    for(auto i : l){
        m.push_back(make_pair(i.first, i.second));
    }
    sort(m.begin(), m.end(), [](auto const& l, auto const& r){
        return l.second < r.second;
    });
    long cnt = 0;
    for(int i = 0; i < m.size() && k < m.size() - i; i++){
        cnt += m[i].second;
    }
    cout << cnt << endl;
    return 0;
}