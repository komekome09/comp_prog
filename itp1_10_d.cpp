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
    cin >> n;

    int A[100], B[100];
    fill(A, A, 0);
    fill(B, B, 0);

    int a;
    double s1 = 0.0, s2 = 0.0, s3 = 0.0, si = 0.0;
    for(int i = 0; i < n; i++){
        cin >> a;
        A[i] = a;
    }
    for(int i = 0; i < n; i++){
        cin >> a;
        B[i] = a;
    }
    for(int i = 0; i < n; i++){
        s1 += fabs(A[i] - B[i]);
        s2 += pow(fabs(A[i] - B[i]), 2);
        s3 += pow(fabs(A[i] - B[i]), 3);
        si = fmax(si, fabs(A[i] - B[i]));
    }

    printf("%.5f\n%.5f\n%.5f\n%.5f\n", s1, sqrt(s2), cbrt(s3), si);
    return 0;
}