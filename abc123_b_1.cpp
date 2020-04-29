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
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    vector<int> f {a,b,c,d,e};
    int min = 99999;
    do {
        int sum = 0;
        for(int i = 0; i < f.size(); i++){
            sum += f[i];
            if(i != f.size()-1 && sum%10 != 0) sum += 10 - sum%10;
        }
        min = std::min(min, sum);
    }while(next_permutation(f.begin(), f.end()));
    cout << min << endl;
    return 0;
}