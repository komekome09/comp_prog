#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll l, r;

    cin >> l >> r;
    vector<ll> a;
    for(ll i = l; i <= l+2019 && i <= r; ++i){
        ll mod = i%2019;
        a.push_back(mod);
    }
    ll mi = 9999;
    rep(i, a.size()){
        for(ll j = i+1; j < a.size(); ++j){
            //printf("%lld * %lld % 2019 = %lld\n", a[i], a[j], (a[i]*a[j])%2019);
            mi = min(mi, a[i]*a[j]%2019);
        }
    }
    cout << mi << endl;
    return 0;
}