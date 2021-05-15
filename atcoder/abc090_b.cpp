#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
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
    int a, b, cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        string s = "";
        int c = i;
        while(c != 0){
            s += c%10 + '0';
            c /= 10;
        }
        string t = s;
        reverse(s.begin(), s.end());
        if(s == t) cnt++;
    }
    cout << cnt << endl;
    return 0;
}