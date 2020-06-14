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
    ll x, n; cin >> x >> n;
    if(n == 0){
        cout << x << endl;
        return 0;
    }
    vector<ll> p(n); cin >> p;
    sort(p.begin(), p.end());
    //for(auto i : p) cout << i << " "; cout << endl;
    ll ansu, ansd, ud, dd;
    for(ll i = x; i <= 200; ++i){
        bool z = true;
        for(auto j : p){
            if(i == j){
                z = false;
                break;
            }
        }
        if(z){
            ansu = i;
            ud = abs(x-i);
            break;
        }
    }
    for(ll i = x; i >= -100; --i){
        bool z = true;
        for(auto j : p){
            if(i == j){
                z = false;
                break;
            }
        }
        if(z){
            ansd = i;
            dd = abs(x-i);
            break;
        }
    }
    ll ans = 0;
    if(dd <= ud) ans = ansd;
    else ans = ansu;
    cout << ans << endl;
    return 0;
}