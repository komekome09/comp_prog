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
    ll k, s; cin >> k >> s;
    ll cnt = 0;
    for(ll x = 0; x <= k; ++x){
        for(ll y = 0; y <= k; ++y){
            ll tmp = s - x - y;
            if(tmp >= 0 && tmp <= k) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}