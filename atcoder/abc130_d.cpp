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
    vector<ll> a(n), as(n, 0);
    ll index = -1, ans = 0;
    rep(i, n){
        cin >> a[i];
        if(i > 0) as[i] = a[i] + as[i-1];
        else as[i] = a[i];
        if(index == -1 && as[i] >= k){
            index = i;
            ans += n - i;
        }
    }
    //for(auto i : a) cout << i << " "; cout << endl;
    //for(auto i : as) cout << i << " "; cout << endl;
    for(ll i = 0; i < n; ++i){
        ll ok = n-1, ng = i;
        while(abs(ok - ng) > 1){
            ll mid = (ok + ng) / 2;
            if(as[mid] - as[i] >= k) ok = mid;
            else ng = mid;
        }
        if(as[ok] - as[i] >= k) ans += n-ok;
    }
    cout << ans << endl;
    return 0;
}