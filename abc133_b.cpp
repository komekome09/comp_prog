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
    int n, d, cnt = 0;
    cin >> n >> d;

    vector<vector<int>> l(n, vector<int>(d));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < d; j++){
            cin >> l[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int sum = 0;
            for(int k = 0; k < d; k++){
                sum += pow(l[i][k] - l[j][k], 2);
            }
            if(pow((int)sqrt(sum), 2) == sum) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}