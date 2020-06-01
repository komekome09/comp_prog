#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n; cin >> n;
    vector<ll> l(n);
    rep(i, n) cin >> l[i];
    sort(l.rbegin(), l.rend());
    ll cnt = 0;
    rep(i, n){
        for(ll j = i+1; j < n; ++j){
            ll a1 = l[i] - l[j], a2 = l[j] - l[i], a3 = l[i] + l[j];
            for(ll k = j+1; k < n; ++k){
                if(a1 < l[k] && a2 < l[k] && l[k] < a3) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}