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
    int n, cnt = 0, m = 0;
    string s;
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        string left = s.substr(0,i), right = s.substr(i, n-i);

        sort(left.begin(), left.end());
        left.erase(unique(left.begin(), left.end()), left.end());
        sort(right.begin(), right.end());
        right.erase(unique(right.begin(), right.end()), right.end());

        for(int j = 0; j < left.length(); j++){
            if(right.find(left[j]) != string::npos){
                cnt++;
            }
        }
        m = max(m, cnt);
        cnt = 0;
    }
    cout << m << endl;
    return 0;
}