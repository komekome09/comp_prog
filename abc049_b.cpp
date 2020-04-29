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
using namespace std;

const double PI=acos(-1);

int main(){
    int h, w;
    cin >> h >> w;
    string s;
    for(int i = 0; i < h; i++){
        cin >> s;
        cout << s << "\n" << s << endl;
    }
    return 0;
}