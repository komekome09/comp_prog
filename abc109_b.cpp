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
    int n;
    cin >> n;

    vector<string> l;
    bool z = true;
    string wp = "";
    for(int i = 0; i < n; i++){
        string w;
        cin >> w;
        if(find(l.begin(), l.end(), w) != l.end()){
            z = false;
            break;
        }else if(i != 0 && wp[wp.length()-1] != w[0]){
            z = false;
            break;
        }else{
            l.push_back(w);
        }
        wp = w;
    }
    if(z) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}