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
    long n, k;
    cin >> n >> k;
    double sum = 0.0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= 17; j++){
            if(pow(2, j)*i >= k){
                double a = 1/(double)n * pow(0.5, j);
                sum += a;
                break;
            }
        }
    }
    printf("%.9f\n", sum);
    return 0;
}