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
    long n, k;
    cin >> n >> k;
    vector<long> l(n);
    vector<long> lb(n, -1);
    vector<long> m;
    for(long i = 0; i < n; i++){
        cin >> l[i];
    }
    long cnt = 0, next = 0;
    while(lb[next] == -1 && cnt <= k){
        lb[next] = cnt;
        m.push_back(next+1);
        next = l[next]-1;
        cnt++;
    }
    
    m.erase(m.begin(), m.begin()+lb[next]);
    long remain = k - lb[next], hoge = remain % (cnt - lb[next]);
    cout << m[hoge] << endl;
    return 0;
}