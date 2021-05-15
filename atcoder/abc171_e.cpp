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
    ll x = 0;
    vector<ll> a(n);
    rep(i, n){
        cin >> a[i];
        x ^= a[i];
    }
    rep(i, n){
        ll b = x ^ a[i];
        cout << b << " ";
    }
    cout << endl;
    return 0;
}