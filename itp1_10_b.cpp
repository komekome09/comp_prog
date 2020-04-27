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

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double h = sin(rad(c)) * b;
    if(fabs(h - 0) < DBL_EPSILON) h = b;

    double s = sqrt(a*a + b*b - 2*a*b*cos(rad(c)));

    printf("%.4f\n%.4f\n%.4f\n", (double)a*h/2, s+a+b, h);
    return 0;
}