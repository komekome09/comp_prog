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
    long n;
    cin >> n;
    vector<long> l(n);
    long four = 0, even = 0, odd = 0;
    for(long i = 0; i < n; i++){
        cin >> l[i];
        if(l[i]%4 == 0) four++;
        else if(l[i]%2 == 0) even++;
        else odd++;
    }
    if(four >= n/2 || (four + even >= n/2 && even >= 2 && four >= odd)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}