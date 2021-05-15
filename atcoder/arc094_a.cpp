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
    vector<int> l(3);
    cin >> l[0] >> l[1] >> l[2];
    sort(l.begin(), l.end(), greater<int>());
    int ab = l[0] - l[1], c = l[2] + ab;
    if(ab == 0 && c == l[0]){
        cout << 0 << endl;
    }else{
        int h = l[0] - c;
        if(h%2 == 1){
            cout  << ab + 2 + h/2 << endl;
        }else{
            cout << ab + h/2 << endl;
        }
    }
    return 0;
}