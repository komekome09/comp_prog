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
    string s;
    cin >> s;

    bool z = true;
    for(int i = 0; i < s.length();){
        if(s[i] != 'd' && s[i] != 'e'){
            z = false;
            break;
        }
    
        if(i + 7 <= s.length() && s.substr(i, 7) == "dreamer"){
            if(i+10 <= s.length() && s.substr(i+5, 5) == "erase"){
                i += 5;
            }else{
                i += 7;
            }
            continue;
        }
        if(i + 6 <= s.length() && s.substr(i, 6) == "eraser"){
            i += 6;
            continue;
        }
        if(i + 5 <= s.length() && s.substr(i, 5) == "erase" || s.substr(i, 5) == "dream"){
            i += 5;
            continue;
        }

        z = false;
        break;
    }
    if(z) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}