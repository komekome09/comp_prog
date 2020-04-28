#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

const double PI=acos(-1);

int main(){
    string a, b, c;
    cin >> a >> b;
    c = a + b;
    int d = stoi(c);
    if(pow((int)sqrt(d), 2) == d) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}