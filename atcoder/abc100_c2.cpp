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

bool iseven(vector<long> const& l){
    long m = 1;
    for(int i = 0; i < l.size(); i++){
        m *= l[i]%2;
    }
    if(m == 0) return true;
    else return false;
}

int main(){
    long n, cnt = 0;
    cin >> n;
    vector<long> l(n);
    for(int i = 0; i < n; i ++){
        cin >> l[i];
        cout << l[i] << " ";
    }
    cout << endl;
    vector<int> m;
    for(int i = 0; i < n; i++){
        if(l[i]%2 == 0){
            m.push_back(i);
        }
    }
    int index = 0;
    while(iseven(l)){
        int j = 0;
        if(l[m[index]]%2 == 1){
            index++;
            if(index == m.size()) break;
        }
        for(int i = 0; i < n; i++){
            if(i == m[index]) l[i] /= 2;
            else l[i] *= 3;
            cout << l[i] << " ";
        }
        cout << endl;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}