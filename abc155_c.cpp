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
    int n, cnt = 0;
    cin >> n;

    map<string, int> l;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        l[s]++;
        cnt = max(cnt, l[s]);
    }
    for(auto a : l){
        if(a.second == cnt)
            cout << a.first << endl;
    }
    return 0;
}