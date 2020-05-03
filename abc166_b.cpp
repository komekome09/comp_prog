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
    int n, k;
    cin >> n >> k;
    vector<bool> nn(n, false);
    for(int i = 0; i < k; i++){
        int d; 
        cin >> d;
        for(int j = 0; j < d; j++){
            int a;
            cin >> a;
            nn[a-1] = true;
        }
    }
    int cnt = 0;
    for(auto aa : nn){
        if(!aa) cnt++;
    }
    cout << cnt << endl;
    return 0;
}