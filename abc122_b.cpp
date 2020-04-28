#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;

const double PI=acos(-1);

int main(){
    string s;
    cin >> s;

    int cnt = 0, max = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != 'A' && s[i] != 'C' && s[i] != 'G' && s[i] != 'T'){
            max = std::max(max, cnt);
            cnt = 0;
            continue;
        }
        cnt++;
    }
    max = std::max(max, cnt);

    cout << max << endl;
    return 0;
}