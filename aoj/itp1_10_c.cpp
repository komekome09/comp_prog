#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
using namespace std;

const double PI=acos(-1);

double rad(int d){
    return (double)d/360*2*PI;
}

int main(){
    int n;
    double p[1000];
    fill(p, p, 0);

    while(cin >> n, n != 0){
        double s = 0, t = 0;
        for(int i = 0; i < n; i++){
            cin >> p[i];
            s += p[i];
        }
        double ave = s / n;
        for(int i = 0; i < n; i++){
            t += pow(p[i] - ave, 2);
        }
        //printf("%.4f %.4f %.4f %d\n", s, ave, t, n);
        printf("%.4f\n", sqrt(t/n));
    }
    return 0;
}