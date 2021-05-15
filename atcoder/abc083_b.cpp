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
    int n, a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int t = i, sum = 0;
        while(t != 0){
            sum += t % 10;
            t /= 10;
        }
        if(sum >= a && sum <= b) cnt += i;
    }
    cout << cnt << endl;
    return 0;
}