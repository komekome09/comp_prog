#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 9999999;
    for(ll i = a[0]; i <= a[n-1]; ++i){
        ll m = 0;
        rep(j, n){
            m += pow(a[j] - i, 2);
        }
        ans = min(ans, m);
    }
    cout << ans << endl;
    return 0;
}