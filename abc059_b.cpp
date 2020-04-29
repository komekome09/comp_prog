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
    string a, b;
    cin >> a >> b;
    //reverse(a.begin(), a.end());
    //reverse(b.begin(), b.end());
    if(a.length() > b.length()) cout << "GREATER" << endl;
    else if(b.length() > a.length()) cout << "LESS" << endl;
    else{
        bool z = true;
        for(int i = 0; i < a.length(); i++){
            if(a[i] > b[i]){
                z = false;
                cout << "GREATER" << endl;
                break;
            }else if(a[i] < b[i]){
                z = false;
                cout << "LESS" << endl;
                break;
            }
        }
        if(z) cout << "EQUAL" << endl;
    }
    return 0;
}