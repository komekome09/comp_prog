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
    vector<ll> a(n), al(n, 0);
    rep(i, n){
        cin >> a[i];
        if(i > k-1){
            if(a[i-k] < a[i]) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        
    }
    return 0;
}