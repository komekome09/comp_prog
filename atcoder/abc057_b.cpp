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
    long n, m;
    cin >> n >> m;
    vector<pair<long, long>> s(n);
    for(int i = 0; i < n; i++){
        long a, b;
        cin >> a >> b;
        s[i] = make_pair(a, b);
    }
    vector<pair<long, long>> p(m);
    for(int i = 0; i < m; i++){
        long a, b;
        cin >> a >> b;
        p[i] = make_pair(a, b);
    }
    //for(auto a : s){ cout << a.first << " " << a.second << endl; }
    //for(auto a : p){ cout << a.first << " " << a.second << endl; }
    //cout << s.size() << " " << p.size() << endl;
    for(int i = 0; i < n; i++){
        long mi = 1000000000, po = -1;
        for(int j = m-1; j >= 0; j--){\
            long len = abs(p[j].first - s[i].first) + abs(p[j].second - s[i].second);
            mi = min(mi, len);
            if(mi == len) po = j+1;
        }
        cout << po << endl;
    }
    return 0;
}