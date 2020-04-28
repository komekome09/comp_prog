#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <numeric>
using namespace std;

const double PI=acos(-1);

int main(){
    int n, a, b, sum = 0, sumb = 0;
    string s;
    cin >> n >> a >> b >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a' && sum < a+b){
            cout << "Yes" << endl;
            sum++;
        }else if(s[i] == 'b' && sum < a+b && sumb < b){
            cout << "Yes" << endl;
            sum++;
            sumb++;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}