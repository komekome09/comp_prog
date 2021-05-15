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
    string s, t, u;
    cin >> s >> t;
    u = t;
    u.erase(u.end()-1);
    if(s == u) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}