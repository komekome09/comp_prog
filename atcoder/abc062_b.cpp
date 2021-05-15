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
    int h, w;
    cin >> h >> w;
    string s = "";
    char ss;
    for(int i = 0; i < h+2; i++){
        s.clear();
        for(int j = 0; j < w+2; j++){
            if(i == 0 || i == h+1 || j == 0 || j == w+1)  s += "#";
            else{
                cin >> ss;
                s += ss;
            }
        }
        cout << s << endl;
    }
    return 0;
}