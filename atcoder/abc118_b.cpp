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
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    iota(a.begin(), a.end(), 1);
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        vector<int> b(k);
        for(int j = 0; j < k; j++){
            cin >> b[j];
        }
        for(int j = 0; j < a.size();){
            if(find(b.begin(), b.end(), a[j]) == b.end())
                a.erase(a.begin()+j);
            else j++;
        }
    }

    cout << a.size() << endl;
    return 0;
}