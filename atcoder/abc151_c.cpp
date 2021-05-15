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
    cin >> n >> m;
    int l[100000] = {0}, p, sum  = 0, pen = 0;;
    bool o[100000] = {false};
    string s;
    for(int i = 0; i < m; i++){
        cin >> p >> s;
        if(s == "WA") l[p]++;
        else {
            if(o[p]) continue;
            pen += l[p];
            sum++;
            o[p] = true;
        }
    }
    cout << sum << " " << pen << endl;
    return 0;
}