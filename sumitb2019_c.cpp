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
    int x;
    cin >> x;
    if(x%100 > x/100*5) cout << "0" << endl;
    else cout << "1" << endl;
    return 0;
}