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
    string s, t = "";
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0') t += "0";
        else if(s[i] == '1') t += "1";
        else{
            if(t.size() != 0) t.erase(t.end()-1);
        }
    }
    cout << t << endl;
    return 0;
}