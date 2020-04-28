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
    vector<vector<int>> a(3,vector<int>(3, 0));
    cin >> a[0][0] >> a[0][1] >> a[0][2] >> a[1][0] >> a[1][1] >> a[1][2] >> a[2][0] >> a[2][1] >> a[2][2];

    int n, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> b;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(a[j][k] == b) a[j][k] = 0;
            }
        }
    }

    if(a[0][0]+a[0][1]+a[0][2] == 0 ||
        a[1][0]+a[1][1]+a[1][2] == 0 ||
        a[2][0]+a[2][1]+a[2][2] == 0 ||
        a[0][0]+a[1][0]+a[2][0] == 0 ||
        a[0][1]+a[1][1]+a[2][1] == 0 ||
        a[0][2]+a[1][2]+a[2][2] == 0 ||
        a[0][0]+a[1][1]+a[2][2] == 0 ||
        a[0][2]+a[1][1]+a[2][0] == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}