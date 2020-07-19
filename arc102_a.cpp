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
    vector<ll> z, kk;
    for(ll i = 1; i <= n; ++i){
        if(i%k == 0) z.push_back(i);
        if(i%k*2 == k) kk.push_back(i);
    }
    ll ans = pow(z.size(), 3) + pow(kk.size(), 3);
    cout << ans << endl;
    return 0;
}