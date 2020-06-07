#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll a, r, n;
    cin >> a >> r >> n;
    ll nth = a;
    rep(i, n){
        if(r == 1) break;
        if(i > 0) nth *= r;
        if(nth > 1000000000){
            cout << "large" << endl;
            return 0;
        }
    }
    cout << nth << endl;
    return 0;
}