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
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0, max = cnt;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'I') cnt++;
        else cnt--;
        max = std::max(max, cnt);
    }
    cout << max << endl;
    return 0;
}