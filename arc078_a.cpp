#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n; cin >> n;
    vector<ll> a(n), asum(n);
    rep(i, n){
        cin >> a[i];
        if(i == 0) asum[i] = a[i];
        else asum[i] = asum[i-1] + a[i];
    }
    ll ans = 999999999999;
    rep(i, n-1){
        ll diff = abs(asum[i] - (asum[n-1] - asum[i]));
        ans = min(ans, diff);
    }
    cout << ans << endl;
    return 0;
}