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
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    char t = ' ';
    int cnt = 1;
    bool z = true;
    for(int i = 0; i < s.length(); i++, cnt++){
        if(s.length() == 1){
            z = false;
            break;
        }
        if(s[i] != t){
            if(i != 0 && cnt%2 != 0){
                z = false;
                break;
            }
            t = s[i];
            cnt = 0;
        }
    }
    if(z) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}