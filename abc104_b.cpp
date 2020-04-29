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
    bool z = true;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(i == 0){
            if(s[i] != 'A'){
                z = false;
                break;
            }
        } 
        else if(i >= 2 && i <= s.length()-2 && s[i] == 'C'){
            if(cnt == 1){
                z = false;
                break;
            }else cnt++;
        }else if('A' <= s[i] && s[i] <= 'Z'){
            z = false;
            break;
        }
    }
    if(z && cnt == 1) cout << "AC" << endl;
    else cout << "WA" << endl;
    return 0;
}