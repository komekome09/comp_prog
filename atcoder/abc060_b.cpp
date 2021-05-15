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
    long a, b, c;
    cin >> a >> b >> c;
    bool z = false;
    for(int i = 1; i <= b; i++){
        if((a*i)%b == c){
            z = true;
            break;
        }
    }
    if(z) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}