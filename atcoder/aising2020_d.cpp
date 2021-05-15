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

ll f(ll x){
    if(x == 0) return 0;
    return f(x%__builtin_popcountll(x))+1;
}

int main(){
    ll n; string s; cin >> n >> s;
    ll cnt = 0;
    rep(i,n) cnt += s[i] - '0';
    vector<ll> ans(n,0);
    rep(i, 2){
        ll tmp = cnt + (i == 0 ? 1 : -1);
        if(tmp <= 0) continue;
        ll r = 0;
        rep(j, n){
            r = (r*2)%tmp;
            r += s[j] - '0';
        }
        ll t = 1;
        for(ll j = n-1; j >= 0; --j){
            if(s[j]-'0' == i){
                ll u = r;
                if(i == 0) u = (u+t)%tmp;
                else u = (u-t+tmp)%tmp;
                ans[j] = f(u)+1;
            }
            t = (t*2)%tmp;
        }
    }
    for(auto i : ans){
        cout << i << endl;
    }
    
    return 0;
}