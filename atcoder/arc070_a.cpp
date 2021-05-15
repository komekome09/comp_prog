#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll x, ans = 0;
    cin >> x;
    for(ll i = 1; i < 100000; ++i){
        ll sum = i*(i+1)/2;
        if(sum >= x){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}