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
    string o, e, s = "";
    cin >> o >> e;
    for(int i = 0; i < o.length()+e.length(); i++){
        if(i%2 == 0){
            s += o[i/2];
        }else{
            s += e[i/2];
        }
    }
    cout << s << endl;
    return 0;
}