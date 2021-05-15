#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

template<typename T>
istream& operator>> (istream& is, vector<T> &vec){
    for(T& x: vec) is >> x;
    return is;
}

int main(){
    ll n, m; cin >> n >> m;
    vector<vector<ll>> sw(n, vector<ll>());
    rep(i, m){
        ll k; cin >> k;
        rep(j, k){
            ll s; cin >> s;
            sw[s-1].push_back(i);
        }
    }
    vector<ll> cond(m);
    rep(i, m) cin >> cond[i];

    ll cnt = 0;
    for(ll i = 0; i < (1LL << n); ++i){
        vector<ll> light(m, 0);
        for(ll j = 0; j < n; ++j){
            if(!(i & (1LL << j))) continue;
            for(auto k : sw[j]){
                light[k]++;
            }
        }
        ll tmp = 0;
        rep(j, m){
            if(light[j]%2 == cond[j]){
                tmp++;
            }
        }
        if(tmp == m) cnt++;
    }
    cout << cnt << endl;
    return 0;
}