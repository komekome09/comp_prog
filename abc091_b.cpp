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
    int n, m;
    cin >> n;
    map<string, int> l;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        l[s]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        l[s]--;
    }
    int max = 0;
    for(auto a : l){
        //cout << a.first << " : " << a.second << endl;
        if(a.second < 0) continue;
        else max = std::max(max, a.second);
    }
    cout << max << endl;
    return 0;
}