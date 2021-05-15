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
#include <map>
using namespace std;

const double PI=acos(-1);

int main(){
    long h, w;
    cin >> h >> w;
    char s[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char c;
            cin >> c;
            s[i][j] = c;
        }
    }
    bool z = true;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            long bl = 0;
            if(i > 0 && s[i-1][j] == '#') bl++;
            if(i < h-1 && s[i+1][j] == '#') bl++;
            if(j > 0 && s[i][j-1] == '#') bl++;
            if(j < w-1&& s[i][j+1] == '#') bl++;
            if(s[i][j] == '#' && bl == 0){
                z = false;
                break;
            }
        }
    }
    if(z) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}