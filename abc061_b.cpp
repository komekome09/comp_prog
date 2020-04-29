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
using namespace std;

const double PI=acos(-1);

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> t(n, 0);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        t[a-1]++;
        t[b-1]++;
    }
    for(int i = 0; i < n; i++){
        cout << t[i] << endl;
    }
    return 0;
}