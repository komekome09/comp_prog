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
    vector<ll> p, m;
    rep(i, n){
        ll b; cin >> b;
        if(b < 0) m.push_back(b);
        if(b >= 0) p.push_back(b);
    }
    sort(m.begin(), m.end());
    sort(p.rbegin(), p.rend());
    return 0;
}