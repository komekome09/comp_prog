#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
using namespace std;

const double PI=acos(-1);

int main(){
    int a, b;
    cin >> a >> b;
    if((a*b)%2==0) cout << "Even" << endl;
    else if((a*b)%2==1) cout << "Odd" << endl;
    return 0;
}