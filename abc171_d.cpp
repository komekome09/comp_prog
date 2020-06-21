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
    vector<ll> a(100001, 0);
    ll sum = 0;
    rep(i, n){
        ll aa; cin >> aa;
        a[aa]++;
        sum += aa;
    }
    ll q; cin >> q;
    rep(i, q){
        ll b, c; cin >> b >> c;
        sum += (c-b)*a[b];
        a[c] += a[b];
        a[b] = 0;
        cout << sum << endl;
    }
    
    return 0;
}