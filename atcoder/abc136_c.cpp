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

    vector<int> l(n);
    for(int i = 0; i < n; i++){
        cin >> l[i];        
    }
    bool z = true;
    reverse(l.begin(), l.end());
    for(int i = 0; i < n; i++){
        if(i != n-1){
            if(l[i+1] - l[i] > 1){
                z = false;
                break;
            }else if(l[i+1] - l[i] == 1){
                l[i+1]--;
            }
        }
    }

    if(z) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}