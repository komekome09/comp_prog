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
    int n, m, c;
    cin >> n >> m >> c;

    int b[20], a[20], cnt = 0;
    fill(a,a,0);
    fill(b,b,0);
    for(int i = 0; i <= n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            if(i==0){
                cin >> b[j];
            }else{
                cin >> a[j];
                sum += b[j]*a[j];
            }
        }

        if(i!=0 && sum+c > 0) cnt++;
    }

    cout << cnt << endl;
}