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
    ll n, q; cin >> n >> q;
    vector<priority_queue<ll, vector<ll>, greater<ll>>> list(200001);
    vector<ll> child(n+1);
    rep(i, n){
        ll a, b; cin >> a >> b;
        child[i+1] = a;
        list[b].push(a);
    }
    ll minimum = 9999999;
    for(auto i : list){
        minimum = min(minimum, i.top());
    }
    rep(i, q){
        ll c, d; cin >> c >> d;
        if(child[c] > list[d].top()){
            list[d].push(child[c]);
            
            minimum = min(minimum, child[c]);
        }
    }
    return 0;
}