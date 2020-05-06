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
    int x, y;
    cin >> y >> x;
    char l[50][50];
    int m[50][50];
    fill(m[0], m[50], 0);
    fill(l[0], l[50], '.');
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            cin >> l[i][j];
        }
    }
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            if(l[i][j] == '#'){
                if(i != 0) m[i-1][j]++;
                if(i != 0 && j != 0) m[i-1][j-1]++;
                if(j != 0) m[i][j-1]++;
                if(i != y-1 && j != 0) m[i+1][j-1]++;
                if(i != y-1) m[i+1][j]++;
                if(i != y-1 && j != x-1) m[i+1][j+1]++;
                if(j != x-1) m[i][j+1]++;
                if(i != 0 && j != x-1) m[i-1][j+1]++;
            }
        }
    }
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            if(l[i][j] == '#') cout << '#';
            else printf("%c", m[i][j] + '0');
        }
        cout << '\n';
    }
    
    return 0;
}