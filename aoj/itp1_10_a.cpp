#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    printf("%.4f\n", sqrt(pow(c-a, 2)+pow(d-b,2)));
    return 0;
}