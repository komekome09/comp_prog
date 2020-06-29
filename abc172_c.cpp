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
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    vector<ll> as(n+1, 0), bs(m+1, 0);
    rep(i, n){
        cin >> a[i];
        as[i+1] = as[i] + a[i];
    }
    rep(i, m){
        cin >> b[i];
        bs[i+1] = bs[i] + b[i];
    }
    ll ans = 0, j = m;
    rep(i, n+1){
        if(as[i] > k) break;
        while(bs[j] > k - as[i]) j--;
        ans = max(ans, i+j);
    }
    
    cout << ans << endl;
    return 0;
}