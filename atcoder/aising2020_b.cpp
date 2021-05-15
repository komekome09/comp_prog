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
    ll n; cin >> n;
    vector<ll> a(n); cin >> a;
    ll ans = 0;
    rep(i, n){
        if((i+1)%2 == 1 && a[i]%2 == 1) ans++;
    }
    cout << ans << endl;
    return 0;
}