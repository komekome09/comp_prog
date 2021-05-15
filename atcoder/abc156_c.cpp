#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <numeric>
using namespace std;

const double PI=acos(-1);

int main(){
    int n;
    cin >> n;

    int l[100];
    fill(l, l, 0);
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    sort(l, l+n);
    int dist = numeric_limits<int>::max();
    for(int p = 1; p <= 100; p++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += pow(l[i] - p, 2);
        }
        dist = min(dist, sum);
    }

    cout << dist << endl;
}