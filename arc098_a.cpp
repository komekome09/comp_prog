#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const double PI=acos(-1);

int main(){
    ll n; string s; cin >> n >> s;
    vector<ll> w(n, 0), e(n, 0);
    rep(i, n) w[i] = w[i == 0 ? 0 : i-1] + (s[i] == 'W' ? 1 : 0);
    for(ll i = n-1; i >= 0; --i) e[i] = e[i == n-1 ? n-1 : i+1] + (s[i] == 'E' ? 1 : 0);

    ll ans = 99999999;
    rep(i, n){
        ll ww = w[i], ee = e[i];
        if(s[i] == 'W') ww--;
        else ee--;
        ans = min(ans, ww+ee);
    }
    cout << ans << endl;
    return 0;
}