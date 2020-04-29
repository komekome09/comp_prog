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

    int f[5] = {a, b, c, d, e}, sum = 0, min = 99999;
    bool g[5] = {false};
    for(int i = 0; i < 5; i++){
        fill(g, g+5, false);
        sum = 0;
        g[i] = true;

        for(int j = 0; j < 5; j++){
            if(i == j) continue;
            g[j] = true;
            
            for(int k = 0; k < 5; k++){
                if(k == i || k == j) continue;
                g[k] = true;

                for(int l = 0; l < 5; l++){
                    if(l == i || l == j || l == k) continue;
                    g[l] = true;
                    int m = 0;

                    for(int ii = 0; ii < 5; ii++){
                        if(!g[ii]){
                            m = ii;
                            g[m] = true;
                        }
                    }

                    sum = f[i];
                    if(sum%10 != 0) sum += 10 - sum%10;
                    sum += f[j];
                    if(sum%10 != 0) sum += 10 - sum%10;
                    sum += f[k];
                    if(sum%10 != 0) sum += 10 - sum%10;
                    sum += f[l];
                    if(sum%10 != 0) sum += 10 - sum%10;
                    sum += f[m];

                    min = std::min(min, sum);
                    g[l] = false;
                    g[m] = false;
                }
                g[k] = false;
            }
            g[j] = false;
        }
    }
    cout << min << endl;
    return 0;
}