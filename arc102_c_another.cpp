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
    ll n, k; cin >> n >> k;
    vector<ll> m(k, 0);
    for(ll i = 1; i <= n; ++i) m[i%k]++;
    ll ans = 0;
    rep(i, k){
        ll b = (k - i) % k;
        ll c = (k - i) % k;
        if((b+c)%k != 0) continue;
        ans += m[i] * m[b] * m[c];
    }
    cout << ans << endl;
    return 0;
}