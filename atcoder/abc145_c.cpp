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
    vector<pair<int, pair<double, double>>> l(n);
    for(int i = 0; i < n; i++){
        double x, y;
        cin >> x >> y;
        l[i].first = i;
        l[i].second.first = x;
        l[i].second.second = y;
    }
    
    double ans = 0;
    do{
        for(int i = 1; i < l.size(); i++){
            double t = sqrt(pow(l[i].second.first - l[i-1].second.first, 2) + pow(l[i].second.second - l[i-1].second.second, 2));
            ans += t;
        }
    }while(next_permutation(l.begin(), l.end()));
    int b = 1;
    for(int i = 1; i <= n; i++) b*= i;
    ans /= b;
    printf("%.6f\n", ans);
    return 0;
}